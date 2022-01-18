#include <iostream>

using namespace std;

typedef struct Node {
    int data;
    Node* left;
    Node* right;
}Node;

class BinaryTree {

public:
    BinaryTree(){ };
    void InsertNode(int key);
    void DestroyTree();
    Node* SearchNode(int key);
    ~BinaryTree() { };

private:
    void DestroyTree(Node* leaf);
    void InsertNode(int key, Node* leaf);
    Node* SearchNode(int key, Node* leaf);

    Node* Root;
};


int main() {
    return 0;
}
