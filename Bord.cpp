#include "Bord.hpp"
#include <iostream>

//デフォルトコンストラクタ
Bord::Bord(int size){
    BORD_SIZE = size;
    turn = 0;
}
//ボードの初期化
void Bord::init(){
    for(int i=0;i<BORD_SIZE;++i){
        if(i/4!=0 && i%4!=0){
            BORD[i] = 0;
        } else {
            BORD[i] = 3;
        }
    }
}
int Bord::get_turn(){
    return turn;
}
//turnplayer==1(先攻),==2(後攻)
void Bord::step_forward(int const step_number,int const turnplayer){
    if(turnplayer==1){
        BORD[step_number] = 1;
    } else if(turnplayer==2){
        BORD[step_number] = 2;
    }
}
void Bord::step_back(int const step_number){
    BORD[step_number] = 0;
}

void Bord::show(){
    std::cout<<"*ABC"<<std::endl;
    for(int i=0;i<3;++i){
        for(int j=0;j<4;++j){
            if(BORD[j]==0){
                std::cout<<"-";
            } else if(BORD[j]==1){
                std::cout<<"O";
            } else if(BORD[j]==2){
                std::cout<<"X";
            } else if(BORD[j]==3){
                std::cout<<"-";
            }
        }
        std::cout<<"\n";
    }
}
