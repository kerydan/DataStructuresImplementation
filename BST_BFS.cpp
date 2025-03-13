#include <print>
#include <queue>

class TreeNode
{
public:
    TreeNode(int val): val(val), left(nullptr), right(nullptr){}
    int val;
    TreeNode* left;
    TreeNode* right;
};

// Breadth First Search Algorithm
void bfs(TreeNode* n)
{
    if (!n)
        return;
    std::queue<TreeNode*> fifo;
    fifo.push(n);
    while(!fifo.empty())
    {
        auto cur = fifo.front();
        fifo.pop();
        if (cur)
        {
            std::println("Val = {}", cur->val);
            fifo.push(cur->left);            
            fifo.push(cur->right);            
        }
    }
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
    
    bfs(root);
    
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;    
    return 0;
}
