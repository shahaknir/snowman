#include "snowman.hpp"
#include <iostream>
#include <vector>
#include <stdio.h>
#include <array>



using namespace std;
enum body_parts {head, nose, left_eye, right_eye, left_arm, right_arm, torso, base};
const int negativeNum = -1;
const int correctSizeInput = 8;
const vector<string> H = {"       \n _===_ ", "  ___  \n ..... ", "   _   \n  /_\\  ", "  ___  \n (_*_) "};
const vector<string> N = {",", ".", "_", " "};
const vector<string> L = {".", "o", "O", "-"};
const vector<string> R = {".", "o", "O", "-"};
const vector<string> X1 = {" ", "\\", " ", " "};
const vector<string> X2 = {"<", " ", "/", " "};
const vector<string> Y1 = {" ", "/", " ", " "};
const vector<string> Y2 = {">", " ", "\\", " "};
const vector<string> T = {" : ", "] [", "> <", "   "};
const vector<string> B = {" : ", "\" \"", "___", "   "};


int toDigit(char c){
    return (c-'0')-1;
}

namespace ariel{
    string snowman(int num){
        string s_num = to_string(num);
        if(s_num.size() != correctSizeInput){
            throw invalid_argument{"Error: The input must be a positive 8 digit number !"};
        }
        vector<int> v_num;
        for(int part = head; part != base+1; part++){
            v_num.push_back(toDigit(s_num[part]));
        }
        try{
            return H.at(v_num[head]) + "\n" +
                X1.at(v_num[left_arm]) + "(" + L.at(v_num[left_eye]) + N.at(v_num[nose])
                + R.at(v_num[right_eye]) + ")" + Y1.at(v_num[right_arm]) + "\n"
                + X2.at(v_num[left_arm]) + "(" + T.at(v_num[torso]) + ")" +
                Y2.at(v_num[right_arm]) + "\n"
                    + " (" + B.at(v_num[base]) + ") ";
        }catch(const exception&){
            throw invalid_argument{"The input digit range is from 1 to 4 only!\n"};
        }
    }
}