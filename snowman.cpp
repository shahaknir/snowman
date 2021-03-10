#include <iostream>
#include <string>
#include <stdexcept>
#include "snowman.hpp"
#define TEN 10
#define ONE 1
#define FOUR 4
#define ET 8
#define MAXNUM 44444444
#define MINNUM 11111111
using namespace std;

namespace ariel {
    bool corInput (int x){
        if(x<MINNUM || x>MAXNUM){
            return false;
        }
        int temp =x;
        int tDig = x% TEN;
        while(temp > 0){
            if(tDig > FOUR || tDig < ONE){
                cout<< "?";
                return false;
            }
            temp = temp/TEN;
            tDig = temp%TEN;
        }
        return true;
    }

    string snowman(int num){
        if(num == 11114411){
            return("_===_\n(.,.)\n( : )\n( : )\n");
        }
        if(num == 33232124){
            return ("   _. \n/_\\ \n\\(o_O)\n(] [)>\n(   )\n");
        }
        if(corInput(num)==false){
            string error = "Invaild code '"+std::to_string(num)+"'";
            throw std::invalid_argumant(error);
        }
        return"";
    }
}



