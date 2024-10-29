#include <iostream>

using namespace std;

class Node{
    public:
    string name;
    Node* next;

};

void printn(Node* n){
    while (n != NULL){
        cout<<n->name<<endl;
        n = n -> next;
    }
};

int main(){
    
    Node* name1 = new Node;
    Node* name2 = new Node;
    Node* name3 = new Node;
    Node* name4 = new Node;
    Node* name5 = new Node;

    name1->name = "khaya";
    name1 -> next = name2;

    name2->name = "amilcar";
    name2 -> next = name3;

    name3->name = "john";
    name3 -> next = name4;

    name4->name = "tutho";
    name4 -> next = name5;

    name5->name = "hamzah";
    name5 -> next = NULL;
    
    printn(name1);
    return 0;


}