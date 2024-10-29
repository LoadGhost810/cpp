#include <iostream>

using namespace std;

class Node{
    public:
    string name;
    Node* next;


};
    void display(Node* st){
        while (st != NULL){
            cout<<st -> name<<endl;
            st = st -> next;
        }
    }
int main(){
Node* stud = new Node();
Node* stud1 = new Node();
Node* stud2 = new Node();

stud -> name = "Khaya";
stud -> next = stud1;

stud1 -> name = "Gama";
stud1 -> next = stud2;

stud2 -> name = "mama";
stud2 -> next = NULL;

display(stud);


}