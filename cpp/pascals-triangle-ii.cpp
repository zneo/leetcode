/**
Given an index k, return the kth row of the Pascal's triangle.

For example, given k = 3,
Return [1,3,3,1].

Note:
Could you optimize your algorithm to use only O(k) extra space?
*/


#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> getRow(int rowIndex) {
    	vector<int> result(rowIndex+1);
    	if(rowIndex == 0){
    		result[0] = 1;
    		return result;
    	}else if(rowIndex == 1){
    		result[0] = result[1] = 1;
    		return result;
    	}

    	result[0] = result[1] = 1;
    	int tmp1,tmp2;
    	for(unsigned i = 2; i <= rowIndex; ++i) {
    		tmp1 = result[0] = 1;
    		for(unsigned j = 1; j < i; ++j) {
    			tmp2 = result[j];
				result[j] = tmp1 + tmp2;
    			tmp1 = tmp2;
    		}
    		result[i] = 1;
    	}

    	return result;
    }
};

int main(int argc, char const *argv[])
{
	Solution su;
	vector<int > result = su.getRow(1);
	for(unsigned i = 0; i < 2; ++i) {
		cout<<result[i]<<" ";
	}
	cout<<endl;
	return 0;
}