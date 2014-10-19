/**
Given numRows, generate the first numRows of Pascal's triangle.

For example, given numRows = 5,
Return

[
     [1],
    [1,1],
   [1,2,1],
  [1,3,3,1],
 [1,4,6,4,1]
]
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int> > generate(int numRows) {
    	vector<vector<int> > result(numRows,vector<int>(0));
    	if(numRows == 0) {
    		return result;
    	}else if(numRows == 1) {
    		result[0].push_back(1);
    		return result;
    	}else if(numRows == 2){
    		result[0].push_back(1);
    		result[1].push_back(1);
    		result[1].push_back(1);
    		return result;
    	}

    	result[0].push_back(1);
    	result[1].push_back(1);
    	result[1].push_back(1);
    	
    	for(unsigned i = 2; i < numRows; ++i) {
    		result[i].push_back(1);
    		for(unsigned j = 1; j < result[i-1].size(); ++j) {
    			result[i].push_back(result[i-1][j-1] + result[i-1][j]);
    		}
    		result[i].push_back(1);
    	}

    	return result;

    }
};

int main(int argc, char const *argv[])
{
	Solution su;
	vector<vector<int> > result = su.generate(5);
	for(unsigned i = 0; i < 5; ++i) {
		for(unsigned j = 0; j < result[i].size(); ++j) {
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}