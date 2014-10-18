/*
Given a non-negative number represented as an array of digits, plus one to the number.

The digits are stored such that the most significant digit is at the head of the list.
*/


class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
    	int carry = 1;
    	int sum = 0;
    	
       	std::vector<int>::reverse_iterator rit = digits.rbegin();

    	for ( rit= digits.begin(); rit != digits.end(); ++rit)
    	{
    		sum = *rit + carry;
    		carry = sum/10;
    		*rit = sum%10;

    	}

    	
    	if(carry) {
    		std::vector<int>::iterator i = digits.begin();
    		digits.insert(i,carry);
    	}

    	return digits;
    }
};