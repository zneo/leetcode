/**
The count-and-say sequence is the sequence of integers beginning as follows:
1, 11, 21, 1211, 111221, ...

1 is read off as "one 1" or 11.
11 is read off as "two 1s" or 21.
21 is read off as "one 2, then one 1" or 1211.
Given an integer n, generate the nth sequence.

Note: The sequence of integers will be represented as a string.
*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        std::vector<string> v(n);
        v[0] = "1";
        int i = 1;
        while(i<n) {
            
        	v[i] = "";
            for(int pos=0; pos<v[i-1].size(); ++pos){
            	
            	int count = 1;
            	char currentNum = v[i-1][pos++];
            	while(pos<v[i-1].size() && currentNum == v[i-1][pos]) {
            	    count++;
            	    pos++;
            	}
            	if(pos!=v[i-1].size())
            		pos--;
            	
            	v[i].push_back(count+'0');
            	v[i].push_back(currentNum);

            }

            i++;
        }
        return v[n-1];
    }
};

int main(int argc, char const *argv[])
{
	Solution su;
	cout<<su.countAndSay(5)<<endl;
	return 0;
}