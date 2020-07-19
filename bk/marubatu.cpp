#include <iostream>

class Bord {
   private:
    int BORD[16];

   public:
    Bord();
    void init();

    void step_forward(int const tep_number, int const turnplayer);
    void step_back(int const step_number);

    void show();
};

Bord::Bord() {}
//ボードの初期化
void Bord::init() {
    for (int i = 0; i < 16; ++i) {
        if (i / 4 != 0 || i % 4 != 0) {
            BORD[i] = 0;
        } else {
            BORD[i] = 3;
        }
    }
}
// turnplayer==1(先攻),==2(後攻)
void Bord::step_forward(int const step_number, int const turnplayer) {
    if (turnplayer == 1) {
        BORD[step_number] = 1;
    } else if (turnplayer == 2) {
        BORD[step_number] = 2;
    }
}
void Bord::step_back(int const step_number) { BORD[step_number] = 0; }

void Bord::show() {
    std::cout << "*ABC" << std::endl;
    for (int i = 1; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (BORD[(i * 4) + j] == 0) {
                std::cout << "*";
            } else if (BORD[(i * 4) + j] == 1) {
                std::cout << "O";
            } else if (BORD[(i * 4) + j] == 2) {
                std::cout << "X";
            } else if (BORD[(i * 4) + j] == 3) {
                std::cout << "-";
            }
        }
        std::cout << "\n";
    }
}

int main() {
    Bord b1;
    b1.init();
    b1.show();
}
