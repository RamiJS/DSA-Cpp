#include <cstddef>

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val);
    void printInOrder(Node *node, int space = 0, int increment = 4);
};