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

void printtree(Node* root){

    if (root == nullptr) return;
    cout<<root->data<<endl;
    printtree(root->left);
    printtree(root->right);
};
int main(){
    Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);

    root->left->left = createNode(4);
    root->left->right = createNode(5);
    printtree(root);
    return 0;

}