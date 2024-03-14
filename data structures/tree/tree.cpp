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

int Node::height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    return 1 + std::max(height(root->left), height(root->right));
}

bool Node::isBalanced(Node *root)
{
    if (root == NULL)
    {
        return true;
    }

    int r = height(root->right);
    int l = height(root->left);

    bool isCurrentBalanced = abs(r - l) <= 1;

    return isCurrentBalanced && isBalanced(root->right) && isBalanced(root->left);
}