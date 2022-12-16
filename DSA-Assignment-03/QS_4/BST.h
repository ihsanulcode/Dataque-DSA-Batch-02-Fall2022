#include <iostream>
using namespace std;

template <class T>
class TreeNode
{
public:
    T data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(T data)
    {
        this->data = data;
        this->right = NULL;
        this->left = NULL;
    }
};

template <class T>
class BST
{
private:
    TreeNode<T> *root;
    void insertNode(TreeNode<T> *&tree, T data);
    void inorder_traversal(TreeNode<T> *root);
    int countLeaf(TreeNode<T> *root);
    int treeHeight(TreeNode<T> *root);

public:
    BST();
    void insertNode(T);
    void inorder_traversal();
    int countLeaf();
    int treeHeight();
};
