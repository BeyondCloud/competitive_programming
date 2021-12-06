#include <vector>
#include <iostream>

using namespace std;

template <class t>
class BST
{
    t data;
    BST *left, *right;

public:
    BST() : left(nullptr), right(nullptr){};
    BST(t value) : left(nullptr), right(nullptr) { data = value; };
    BST *insert(BST *root, t value)
    {
        if (!root)
            return new BST(value);

        // Insert data.
        if (value > root->data)
            root->right = insert(root->right, value);
        else
            root->left = insert(root->left, value);

        // Return 'root' node, after insertion.
        return root;
    };
    void inorder(BST *root)
    {
        if (!root)
            return;
        root->inorder(root->left);
        cout << root->data << endl;
        root->inorder(root->right);
    };
};

int main()
{

    BST<int> b(30);
    b.insert(&b, 20);
    b.insert(&b, 40);
    b.insert(&b, 70);
    b.insert(&b, 60);
    b.insert(&b, 80);

    b.inorder(&b);
    return 0;
}
