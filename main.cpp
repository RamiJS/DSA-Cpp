#include <iostream>
#include "./data structures/tree/tree.cpp"
using namespace std;

int main()
{
    Node node = Node(0);
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(10);
    root->left->left->left = new Node(12);

    // node.printInOrder(root);

    std::cout << "Height of the tree is: " << node.height(root) << std::endl; // Output: 3

    return 0;
}