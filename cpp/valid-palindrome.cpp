/**
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

For example,
'A man, a plan, a canal: Panama' is a palindrome.
'race a car' is not a palindrome.

Note:
Have you consider that the string might be empty? This is a good question to ask during an interview.

For the purpose of this problem, we define empty string as valid palindrome.
*/


#include <iostream>
using namespace std;


class Solution {
public:
    bool isPalindrome(string s) {
        if(!this->havealphanumeric(s))
        	return true;
        int left = 0, right = s.length()-1;

        while(left < right) {
            while(!isalphanumeric(s[left]))
            	left++;
            while(!isalphanumeric(s[right]))
            	right--;

            //cout<<"left="<<left<<std::tolower(s[left])<<" right="<<right<<std::tolower(s[right])<<endl;
            if(std::tolower(s[left]) != std::tolower(s[right])) {
            	
            	return false;

            }
            
            left++;
            right--;
        }

        return true;

    }

    bool havealphanumeric(string s){
    	for(unsigned i = 0; i < s.length(); ++i) {
    		if(this->isalphanumeric(s[i])) {
    			return true;
    		}
    	}
    	return false;
    }

    bool isalphanumeric(char ch){
    	return ch>='A'&&ch<='Z' || ch>='a'&&ch<='z' || ch>='0'&&ch<='9';
    }

    
};

int main(int argc, char const *argv[])
{
	Solution su;
	string s= "BaB";
	cout<<su.isPalindrome(s);
	return 0;
}