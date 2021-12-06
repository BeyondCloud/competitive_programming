template <class T>
struct TreeNode
{
    T val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : left(nullptr), right(nullptr) {}
    TreeNode(T x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(T x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};