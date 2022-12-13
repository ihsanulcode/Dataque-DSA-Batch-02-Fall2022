#include "BST.h"
#include <iostream>
using namespace std;

template <class T>
BST<T>::BST()
{
    this->root = NULL;
}

template <class T>
void BST<T>::insertNode(TreeNode<T> *&tree, T data)
{
    if (tree == NULL)
    {
        tree = new TreeNode<T>(data);
    }
    else if (data < tree->data)
    {
        insertNode(tree->left, data);
    }
    else
    {
        insertNode(tree->right, data);
    }
}

template <class T>
void BST<T>::insertNode(T data)
{
    insertNode(this->root, data);
}

template <class T>
void BST<T>::inorder_traversal(TreeNode<T> *root)
{
    if (root == NULL)
        return;

    inorder_traversal(root->left);
    cout << root->data << " ";
    inorder_traversal(root->right);
}

template <class T>
void BST<T>::inorder_traversal()
{
    inorder_traversal(this->root);
}

template <class T>
int BST<T>::countLeaf(TreeNode<T> *tree)
{
    if (tree == NULL)
        return 0;
    if (tree->left == NULL && tree->right == NULL)
        return 1;
    else
        return countLeaf(tree->left) + countLeaf(tree->right);
}

template <class T>
int BST<T>::countLeaf()
{
    return countLeaf(root);
}

template <class T>
int BST<T>::treeHeight(TreeNode<T> *tree)
{
    if (tree == NULL)
        return 0;
    else
    {
        int lDepth = treeHeight(tree->left);
        int rDepth = treeHeight(tree->right);

        if (lDepth > rDepth)
            return (lDepth + 1);
        else
            return (rDepth + 1);
    }
}

template <class T>
int BST<T>::treeHeight()
{
    return treeHeight(root);
}