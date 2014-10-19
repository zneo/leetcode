/**
Given two sorted integer arrays A and B, merge B into A as one sorted array.

Note:
You may assume that A has enough space (size that is greater or equal to m + n) to hold additional elements from B. The number of elements initialized in A and B are m and n respectively.
*/

class Solution {

public:
    void merge(int A[], int m, int B[], int n) {

    	
    	if(((A[0]<=A[m-1])^(B[0]<=B[n-1]))) {
    		int tmp;
    		for(unsigned i = 0; i < n/2; ++i) {
    			tmp = B[i];
    			B[i] = B[n-i-1];
    			B[n-i-1] = tmp;
    		}
    	}

    	int direction = (A[i] - A[m-1])<;



    	for(unsigned i = 0; i < m; ++i) {
    		A[i+n] = A[i];
    	}

    	int pa = n;
    	int pb = 0;
    	int pab = 0;
    	while(pa<m+n && pb<n) {
    	    
    	}
    }
};