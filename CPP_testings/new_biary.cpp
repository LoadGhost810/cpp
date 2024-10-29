#include <iostream>

using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
};
Node* createNode(int data){
    Node* newnode = new Node();

    newnode->data = data;
    newnode->left = newnode->right = nullptr;
    return newnode;
}
void prnt(Node* root){
    if (root == nullptr) return;

    cout<<root->data<<endl;
    prnt(root->left);
    prnt(root->right);
}
int main(){

    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);

    root->left->left = createNode(4);
    root->left->right = createNode(5);

    root->left->left->left = createNode(6);

    root->right->left = createNode(7);
    root->right->right = createNode(8);

    prnt(root);
    return 0;

}