#include "BST.cpp"
#include <iostream>
using namespace std;

int main()
{
    BST<int> tree;

    tree.insertNode(5);
    tree.insertNode(2);
    tree.insertNode(1);
    tree.insertNode(4);
    tree.insertNode(3);
    tree.insertNode(8);
    tree.insertNode(6);
    tree.insertNode(7);
    tree.insertNode(9);
    tree.insertNode(10);

    cout << "Inorder: ";
    tree.inorder_traversal();
    cout << endl;

    cout << "Tree Height: " << tree.treeHeight() << endl;
    cout << "Number of leaf Nodes: " << tree.countLeaf() << endl;
}
