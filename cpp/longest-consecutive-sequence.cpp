/**
Given an unsorted array of integers, find the length of the longest consecutive elements sequence.

For example,
Given [100, 4, 200, 1, 3, 2],
The longest consecutive elements sequence is [1, 2, 3, 4]. Return its length: 4.

Your algorithm should run in O(n) complexity.
*/

#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int> &num) {
    	map<int,int> hash;
    	for(unsigned i = 0; i < num.size(); ++i) {
    		hash[num[i]] = 1;
    	}

    	int max_length = 0;
    	int length = 0;
    	int pre_num;
    	map<int,int>::iterator it=hash.begin();
    	pre_num = it->first;
    	max_length =  length = 1;

    	it++;

    	for (; it!=hash.end(); ++it){
    		
    			if(it->first == pre_num+1) {
    				length++;
    				
    				max_length = max_length>=length? max_length:length;
    			}else{
    				max_length = max_length>=length? max_length:length;
    				length = 1;
    			}
    			pre_num = it->first;
    		
    	}

    	return max_length;

    }
};

int main(int argc, char const *argv[])
{
	int test[] = {0,-1};
	vector<int> num(test, test + sizeof(test)/sizeof(int));

	Solution su;
	cout<<su.longestConsecutive(num)<<endl;
	return 0;
}