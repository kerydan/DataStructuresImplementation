#include <print>

class TreeNode
{
public:
    TreeNode(int val): val(val), left(nullptr), right(nullptr){}
    int val;
    TreeNode* left;
    TreeNode* right;
};

void dfs(TreeNode *n)
{
    if (!n)
        return;
    // Pre-order traversal (Root -> Left -> Right)
    std::println("Val = {}", n->val);
    dfs(n->left);
    dfs(n->right);
    // In-order traversal (Left -> Root -> Right)
    // Post-order traversal (Left -> Right -> Root)
}

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
    
    dfs(root);
    
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;    
    return 0;
}
