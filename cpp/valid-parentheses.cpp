/**
Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.
*/

#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> dropbox;
        for(unsigned i = 0; i < s.length(); ++i) {
        	if( this->isLeft(s[i]) ){
        		dropbox.push(s[i]);
        	}else{
        		if(dropbox.empty()){
        			return false;
        		}
        		else if( !this->match(dropbox.top(),s[i])){
        			return false;
        		}
        		else
        			dropbox.pop();
        	}

        }

        if( !dropbox.empty())
        	return false;
        return true;
    }

    bool isLeft(char ch){
    	return ch=='('||ch=='['||ch=='{';
    }

    bool match(char left, char right){
    	return (left=='(' && right==')') ||
    		   (left=='[' && right==']') ||
    		   (left=='{' && right=='}');
    }
};

int main(int argc, char const *argv[])
{
	Solution su;
	string str = "()";
	cout<<su.isValid(str)<<endl;
	return 0;
}