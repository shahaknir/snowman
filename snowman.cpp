#include "snowman.hpp"
#include <iostream>
#include <vector>
#include <stdio.h>
#include <array>



using namespace std;

// Function Declaration
string snowman(int num);
string Hat(int num, string a);
string Nose_Mouth(int num, string a);
string Left_Right_Eye(int num, string a);
string Left_Arm(int num, string a);
string Right_Arm(int num, string a);
string Torso(int num, string a);
string Base(int num, string a);
// void main(int argc, const char** argv);


namespace ariel
{
    bool corInput(int x)
    {
        if (x < MINIMUM_LENGTH || x > MAXIMUM_LENGTH)
        {
            return false;
        }
        int temp = x;
        int tDig = x % BASE;
        while (temp > FIRST_INDEX)
        {
            if (tDig > MAX_CHAR || tDig < MIN_CHAR)
            {
                return false;
            }
            temp = temp / BASE;
            tDig = temp % BASE;
        }
        return true;
    }

    //
    string Hat(int num, string a){
        string str1;
        if(num == FIRST_OPTION){
            str1 = "_===_\n";
        }
        if(num == SECOND_OPTION){
            str1 = " ___ \n.....\n";
        }
        if(num == THIRD_OPTION){
            str1 = "  _  \n /_\\n";
        }
        if(num == FOURTH_OPTION){
            str1 = " ___ \n(_*_)\n";
        }
        a = a + str1;
        return a;
    }

    string Nose_Mouth(int num, string a){
        string str2;
        if(num == FIRST_OPTION){
            str2 = ",";
        }
        if(num == SECOND_OPTION){
            str2 = ".";
        }
        if(num == THIRD_OPTION){
            str2 = "_";
        }
        if(num == FOURTH_OPTION){
            str2 = " ";
        }
        a = a + str2;

        return a;
    }

    string Left_Right_Eye(int num, string a){
        string str3;
        if(num == FIRST_OPTION){
            str3 = ".";
        }
        if(num == SECOND_OPTION){
            str3 = "o";
        }
        if(num == THIRD_OPTION){
            str3 = "O";
        }
        if(num == FOURTH_OPTION){
            str3 = "-";
        }
        a = a + str3;
        return a;
    }

    string Left_Arm(int num, string a){
        string str4;
        if(num == FIRST_OPTION){
            str4 = "<";
        }
        if(num == SECOND_OPTION){
            str4 = "\\";
        }
        if(num == THIRD_OPTION){
            str4 = "/";
        }
        if(num == FOURTH_OPTION){
            str4 = "";
        }

        a = a + str4;
        return a;
    }

    string Right_Arm(int num, string a){
        string str5;
        if(num == FIRST_OPTION){
            str5 = ">\n";
        }
        if(num == SECOND_OPTION){
            str5 = "/\n";
        }
        if(num == THIRD_OPTION){
            str5 = "\\n";
        }    
        if(num == FOURTH_OPTION){
            str5 = " \n";
        }

        a = a + str5;
        return a;
    }


    string Torso(int num, string a){
        string str6;
        
        if(num == FIRST_OPTION){
            str6 = "( : )";
        }
        if(num == SECOND_OPTION){
            str6 = "(] [)";
        }
        if(num == THIRD_OPTION){
            str6 = "(> <)";
        }
        if(num == FOURTH_OPTION){
            str6 = "(   )";
        }

        a = a + str6;

        return a;
    }

    string Base(int num, string a){
        string str7;
        
        if(num == FIRST_OPTION){
            str7 = "( : )";
        }
        if(num == SECOND_OPTION){
            str7 = "(" ")";
        }
        if(num == THIRD_OPTION){
            str7 = "(___)";
        }
        if(num == FOURTH_OPTION){
            str7 = "   ";
        }

        a = a + str7;

        return a;
    }
    string snowman(int num)
    {

        if (!corInput(num))
        {
            string error = "Invaild input '" + std::to_string(num) + "'";
            throw std::invalid_argument(error);
        }

        string Snowman;
        std::array<int, MAXIMUM_LENGTH> arr {};
    
            for(int i = MAXIMUM_LENGTH-1;i <= FIRST_INDEX; i--)
            {
                arr.at(i) = num%BASE;
                num = num/BASE;
            }


        if(arr.empty()){
            cout<<"The array is empty!!";
        }

        string t_leftA;
        string t_rightA;
        string temp1;
        temp1 = Hat(arr.at(FIRST_INDEX), Snowman);
        Snowman = temp1;
        temp1  = "";

        if(arr.at(SECOND_INDEX) == 2)
        {
            temp1 = Left_Arm(arr.at(SECOND_INDEX), Snowman);
            Snowman = temp1;
            temp1 = "";

        }
        else{
            t_leftA = Left_Arm(arr.at(SECOND_INDEX), t_leftA);
            Snowman = " " + Snowman;
        }


        temp1 = Left_Right_Eye(arr.at(THIRD_INDEX), Snowman); // Left eye
        Snowman = temp1;
        temp1 = "";

        temp1 = Nose_Mouth(arr.at(FOURTH_INDEX), Snowman);
        Snowman = temp1;
        temp1 ="";

        temp1 = Left_Right_Eye(arr.at(FIFTH_INDEX), Snowman); // Right eye
        Snowman = temp1;
        temp1 ="";


        if(arr.at(SIXEST_INDEX) == SPECIAL_ARM){
            temp1 = Right_Arm(arr.at(SIXEST_INDEX), Snowman);
            Snowman = temp1;
            temp1 = "";
        }
        else{
            t_rightA = Right_Arm(arr.at(SIXEST_INDEX), t_rightA);
            Snowman = " " + Snowman + "\n";
        }

        if(t_leftA.empty()){
            temp1 = Snowman + t_leftA;
            Snowman = temp1;
            temp1 = "";
        }

        temp1 = Torso(arr.at(SEVENTH_INDEX), Snowman);
        Snowman = temp1;
        temp1 = "";

        if(t_rightA.empty()){
            Snowman = Snowman + t_rightA;
        }

        temp1 = Base(arr.at(EIGHTH_INDEX), Snowman);
        Snowman = temp1;
        temp1 = "";

        return Snowman;
    }
}

