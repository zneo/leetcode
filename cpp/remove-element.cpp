/**
Given an array and a value, remove all instances of that value in place and return the new length.

The order of elements can be changed. It doesn't matter what you leave beyond the new length.
*/

class Solution {
public:
    int removeElement(int A[], int n, int elem) {
        int left = 0, right = n-1;
        while(left < right) {
            if(A[left] == elem) {
            	A[left] = A[right];
            	right--;
            }
            left++;
        }

        if(A[left] == elem) {
        	right--;
        }

       	return (right+1);
    }
};