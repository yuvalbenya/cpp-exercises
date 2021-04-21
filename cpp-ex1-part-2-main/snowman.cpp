#include "snowman.hpp"
#include <iostream>
#include <stdexcept>
#include <array>

using namespace std;

namespace ariel{
const bool f = false;
const bool t = true;
const int four = 4;
const int one = 1;
const int minusOne = -1;
const int jump = 4;
const int nose = 1;
const int left_eye = 2;
const int right_eye = 3;
const int left_arm = 4;
const int right_arm = 5;
const int torso = 6;
const int base = 7;
const int decimal_base = 10;
const int wrongInput = 0;


bool check(int x){
    if(x > four || x < one){  return t;}
    return f;
}
//111114411
string snowman(int input){
   const array<string,32> snowmanArray = {"\n _===_","  ___ \n .....","   _  \n  /_\\ ","  ___ \n (_*_)",
                                ",",".","_"," ",
                                ".","o","O","-",
                                ".","o","O","-",
                                "<","\\","/"," ",
                                ">","/","\\"," ",
                                " : ","] [","> <","   ",
                                " : ","\" \"","___","   "};
    string s;
    int Base = input%decimal_base;
    input/=decimal_base;
    int Torso = input%decimal_base;
    input/=decimal_base;
    int Rarm = input%decimal_base;
    input/=decimal_base;
    int Larm = input%decimal_base;
    input/=decimal_base;
    int Reye = input%decimal_base;
    input/=decimal_base;
    int Leye = input%decimal_base;
    input/=decimal_base;
    int Nose = input%decimal_base;
    input/=decimal_base;
    int Hat = input%decimal_base;
    input/=decimal_base;
    if(input != wrongInput) {throw invalid_argument("input contains more than 8 figures");}
    if(check(Hat) || check(Nose) || check(Leye) || check(Reye) || check(Larm) || check(Rarm) || check(Torso) || check(Base)){
    throw invalid_argument("one of the digits is invalid or number has less than 8 figures");}

    //Build the snowman
        s+= snowmanArray.at(Hat + minusOne);
        s+= "\n";
        if(Larm == 2){s+= snowmanArray.at(jump*left_arm + Larm + minusOne);}
        else{s+= " ";}
        s+= "(";
        s+= snowmanArray.at(Leye + jump*left_eye + minusOne);
        s+= snowmanArray.at(Nose + jump*nose + minusOne);
        s+= snowmanArray.at(Reye + jump*right_eye + minusOne);
        s+= ")";
        if(Rarm == 2){s+= snowmanArray.at(jump*right_arm + Rarm + minusOne);}
        s+= "\n";
        if(Larm != 2){s+= snowmanArray.at(jump*left_arm + Larm + minusOne);}
        else{s+=" ";}
        s+="(";
        s+= snowmanArray.at(jump*torso + Torso + minusOne);
        s+= ")";
        if(Rarm != 2){s+= snowmanArray.at(jump*right_arm + Rarm + minusOne);}
        s+= "\n";
        s+=" (";
        s+= snowmanArray.at(jump*base + Base - one);
        s+= ")";
    return s + "\n";
}
}