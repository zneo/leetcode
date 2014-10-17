/**
Given an integer, convert it to a roman numeral.

Input is guaranteed to be within the range from 1 to 3999.
*/

#include <iostream>
#include <cmath>
using namespace std;


class Solution {
public:
    string intToRoman(int num) {
        string Roman[4][9] = {
            {"I","II","III","IV","V","VI","VII","VIII","IX"},
            {"X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},
            {"C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},
            {"M","MM","MMM"}
        };

        int i=3;
        int roman;
        string result="";
        while(i>=0) {
            roman = num/pow(10,i);
            if(roman) {
                result += Roman[i][roman-1];
            }

            num = num % (int)(pow(10,i));
            i--;

        }

        return result;
    }
};

int main(int argc, char const *argv[])
{
    Solution su;
    cout<<su.intToRoman(3999)<<endl;
    return 0;
}