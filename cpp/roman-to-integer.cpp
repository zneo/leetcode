/**
Given a roman numeral, convert it to an integer.

Input is guaranteed to be within the range from 1 to 3999.
*/
#include <iostream>
using namespace std;

class Solution {
	int charToNumber(char ch){
		switch(ch){
			case 'M':
				return 1000;
			case 'D':
				return 500;
			case 'C':
				return 100;
			case 'L':
				return 50;
			case 'X':
				return 10;
			case 'V':
				return 5;
			case 'I':
				return 1;
			default:
				return 0;
		}
	}
public:
    int romanToInt(string s) {
        int number=0;
        int pre=10000,current;

        for(unsigned i = 0; i < s.length(); ++i) {
        	current = this->charToNumber(s[i]);
        	if(current <= pre){
        		number += current;
        		pre = current;
        	}else{
        		number = number - 2*pre + current;
        		pre = current;
        	}
        }

        return number;
    }
};

int main(int argc, char const *argv[])
{
	Solution su;
	string s = "MMMCDLVI";
	cout<<su.romanToInt(s);

	return 0;
}