#include <iostream>

class TreeNode
{
public:
    TreeNode(int val): val(val), left(nullptr), right(nullptr){}
    int val;
    TreeNode* left;
    TreeNode* right;
};


int main()
{
    // Create a simple BST:
    //       5
    //      / \
    //     3   7
    //    / \
    //   1   4

    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(4);
    
    
    return 0;
}
