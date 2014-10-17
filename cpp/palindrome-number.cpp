#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) {
            return false;
        }
        return (x == this->reverse(x) );
    }
    
    int reverse(int x) {
        int sign = (x>=0)?1:-1;
        x = sign*x;
        int result = 0;

        while(x!=0) {
            result = result*10 + (x%10);
            x = x/10;
        }

        return sign*result;

    }
};

int main(int argc, char const *argv[])
{
    Solution su;
    cout<<su.reverse(-2147447412)<<endl;
    return 0;
}