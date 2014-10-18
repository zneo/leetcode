/**
*
*Implement strStr().
*Returns a pointer to the first occurrence of needle in haystack, or null if needle is not part of haystack.
*/

#include <iostream>
using namespace std;

class Solution {
public:
    char *strStr(char *haystack, char *needle) {
    	if(!haystack || !needle) {
    		return NULL;
    	}

    	
    	char *ret = haystack;
    	char *_haystack = haystack;
    	char *_needle = needle;

    	while( ret != NULL) {
    	    _haystack = ret;
    	   	_needle = needle;
    	   	while( _needle != NULL) {
    	   	    if(*(_haystack++) != *(_needle++)) {
    	   	    	break;
    	   	    }
    	   	}

    	   	if(_needle == NULL) {
    	   		return ret;
    	   	}

    	   	ret++;
    	}

    	return NULL;

    }
};

int main(int argc, char const *argv[])
{
	Solution su;
	char haystack[] = "justforatest";
	char needle[] = "for";

	char* result = su.strStr(haystack,needle);

	if(result) {
		printf("%s\n", result);
	}

	return 0;
}
