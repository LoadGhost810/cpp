#include <iostream>

using namespace std;
class Node{
    public:
    int value;
    Node* next;

};
void sum(Node* add){
    int a = 0;

    while (add != NULL){
        a += add->value;
        add = add->next;
    }
    cout<<endl;
    cout<<"Sum of all Nodes :"<<a;
}

void printn(Node* n){
    while(n != NULL){
        cout<<n->value<<endl;
        n = n -> next;


    }
};
int main(){

    Node* head = new Node();
    Node* body = new Node();
    Node* tail = new Node();
   

    head->value = 1;
    head->next = body;

    body->value = 2;
    body->next = tail;

    tail->value = 3;
    tail->next = NULL; 
    

    printn(head);
    sum(head);
    return 0;

}