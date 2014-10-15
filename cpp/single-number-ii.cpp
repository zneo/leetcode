/**
* Given an array of integers, every element appears three times except for one. Find that single one.
*
*Note:
*Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
*/


#include <iostream>
using namespace std;

class Solution {
public:
    int singleNumber(int A[], int n) {
        int int_length = 8*sizeof(int);
        int *count =new int[int_length];
        for(unsigned i = 0; i < int_length; ++i) {
            count[i] = 0;
        }
        
        for(unsigned i = 0; i < n; ++i) {
            for(unsigned j = 0; j < int_length; ++j) {
                count[int_length - j-1] += (A[i]>>j)&0x1;
            }
        }
        
        
        int one=0;
        for(unsigned i = 0; i < int_length; ++i) {
            //cout<<count[i]<<endl;
            one += (count[i]%3)<<(int_length-i-1);
        }
        
        return one;
        
    }
};


int main(int argc, char const *argv[])
{
    Solution su;
    int A[]={2,2,2,3};
    cout<<su.singleNumber(A,4);
    return 0;
}