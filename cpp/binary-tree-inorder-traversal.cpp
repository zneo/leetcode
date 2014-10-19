/**
Given a binary tree, return the inorder traversal of its nodes' values.

For example:
Given binary tree {1,#,2,3},
   1
    \
     2
    /
   3
return [1,3,2].

Note: Recursive solution is trivial, could you do it iteratively?

confused what "{1,#,2,3}" means? > read more on how binary tree is serialized on OJ.
*/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

#include <stack>

class Solution {
public:
    vector<int> inorderTraversal(TreeNode *root) {
        stack<TreeNode *> container;
        vector<int> result;

        TreeNode* cur = root;
        do{
        	if(cur->left != nullptr) {
        		container.push(cur)
        		cur = cur->left;
        	}else{
        		if(cur->right == nullptr){
        			result.push_back(cur->val);
        			cur = container.top();
        			container.pop();
        			result.push_back(cur->val);
        		}else{
        			result.push_back(cur->val);
        			cur = cur->right;
        		}

        	}

        }while(!container.empty());

    }
};