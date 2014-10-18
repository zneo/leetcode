/**
Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

For example, 
Given s = "Hello World",
return 5.
*/
#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(const char *s) {
        
        char* end = const_cast<char *>(s);
        cout<<"s="<<static_cast<void*>(end)<<endl;

        while(*(end++) != '\0');
        
       	end--;
       	cout<<"end="<<static_cast<void*>(end)<<endl;
       	//cout<<(*(end))<<"|"<<endl;
       	printf("end = %c\n",end);
        while(*(end) == ' '){
        	if(end == s)
        		return 0;
        	end--;
        }
        cout<<"end="<<static_cast<void*>(end)<<endl;

        char* pword = end;

        while(*(pword) != ' '){
        	if(pword == s)
        		break;
        	pword--;
        }

        if(pword != s)
        	pword++;

        cout<<*pword<<endl;
        cout<<*end<<endl;

        return ((end - pword)/sizeof(char));

    }
};


int main(int argc, char const *argv[])
{
	Solution su;
	const char s[]=" ";
	cout<<su.lengthOfLastWord(s);
	return 0;
}