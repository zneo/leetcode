/**
Validate if a given string is numeric.

Some examples:
"0" => true
" 0.1 " => true
"abc" => false
"1 a" => false
"2e10" => true
Note: It is intended for the problem statement to be ambiguous. You should gather all requirements up front before implementing one.

多种情况
纯数字："3","0.3",".3","-3"," 0.3"
科学计数法："2e10","2e","2e2e","2e2e2" ...

*/

class Solution {
    bool haveSpace(const char *s){
        char* p = s;
        while( *p == ' ') {
            p++;
        }
    }
public:
    bool isNumber(const char *s) {
            
    }
};