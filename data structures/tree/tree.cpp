#include <iostream>
#include "tree.h"
using namespace std;

Node::Node(int val)
{
    data = val;

    left = NULL;
    right = NULL;
}

void Node::printInOrder(Node *node, int space, int increment)
{
    if (node == nullptr)
    {
        return;
    }

    space += increment;

    printInOrder(node->right, space);

    cout << endl;
    for (int i = increment; i < space; i++)
    {
        cout << " ";
    }
    cout << node->data << "\n";

    printInOrder(node->left, space);
}