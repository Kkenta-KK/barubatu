#ifndef INCLUDED_bord_h_

#define INCLUDED_bord_h_

class Bord{
    private:
        int BORD_SIZE;
        int BORD[];
        static int turn;
    public:
        Bord(int size);
        void init();

        int get_turn();

        void step_forward(int const tep_number,int const turnplayer);
        void step_back(int const step_number);

        void show();
};

#endif
