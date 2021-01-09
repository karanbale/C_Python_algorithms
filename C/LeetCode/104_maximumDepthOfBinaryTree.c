/*
Given the root of a binary tree, return its maximum depth.
A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

Example 1:
Input: root = [3,9,20,null,null,15,7]
Output: 3

Example 2:
Input: root = [1,null,2]
Output: 2

Example 3:
Input: root = []
Output: 0

Example 4:
Input: root = [0]
Output: 1

Constraints:

The number of nodes in the tree is in the range [0, 104].
-100 <= Node.val <= 100

*/

#include "../standardHeaders.h"

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
 };

#define MAX(x,y) ((x) > (y) ? (x) : (y))

int maxDepth(struct TreeNode* root){
    if(!root)    return 0;
    int lDepth = maxDepth(root->left);
    int rDepth = maxDepth(root->right);
    return MAX(lDepth+1, rDepth+1);
    
}
