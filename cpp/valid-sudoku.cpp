/**
Determine if a Sudoku is valid, according to: Sudoku Puzzles - The Rules.

The Sudoku board could be partially filled, where empty cells are filled with the character '.'.


A partially filled sudoku which is valid.

Note:
A valid Sudoku board (partially filled) is not necessarily solvable. Only the filled cells need to be validated.
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
	int charToNumber(char ch){
		if(ch == '.') {
			return -1;
		}else{
			return ch-'0';
		}
	}

	bool valid(vector<int> v){
		/*sort(v);
		int pre = v[0];
		for(unsigned i = 1; i < v.size(); ++i) {
			if(pre == v[i] && v[i]!=-1) {
				return false;
			}
			pre = v[i];
		}
		return true;*/

		for(unsigned i = 0; i < v.size(); ++i) {
			for(unsigned j = i; j < v.size(); ++j) {
				if(v[i]!=-1 && v[i]==v[j]) {
					return false;
				}
			}
		}
		return true;
	}
public:
    bool isValidSudoku(vector<vector<char> > &board) {
       	int blocksize = sqrt(board.size());
       	vector<int> row(board.size());
        vector<int> column(board.size());
        vector<int> block(board.size());
        for(unsigned i = 0; i < board.size(); ++i) {
        	for(unsigned j = 0; j < board[0].size; ++j) {
        		row[j] = this->charToNumber(board[i][j]);
        		column[j] = this->charToNumber(board[j][i]);
        		block[j] = this->charToNumber( \
        			board[blocksize*(i/blocksize)+(j/3)][blocksize*(i%blocksize)+(i%3)]);
        	}

        	if(!this->valid(row) || !this->valid(column) || !this->valid(block)) {
        		return false;
        	}
        }

        return true;


    }
};

int main(int argc, char const *argv[])
{
	std::vector<char> v;
	return 0;
}