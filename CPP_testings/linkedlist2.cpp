#include <iostream>
 
using namespace std;
struct Node{
    int num;
    Node* next;
};
void print(Node* nm){
    while (nm != NULL){
        cout<<nm->num<<endl;
        nm = nm->next;
    }
};
void sum(Node* add){
    int final = 0;
    while (add != NULL){
        final += add ->num;
        add = add->next;
    }
        cout<<"Sum = "<<final<<endl;

};
void great(Node* big){

    int numb = big->num;
    while (big != NULL ){
        if (big->num > numb){
            numb = big->num;
        }
        big = big -> next;

    }
    cout<<numb<<endl;

};
void avg(Node* Avg){
    int n = 0;
    int count = 0;
    while (Avg != NULL){
        n += (Avg -> num);
        Avg =Avg ->next;
        count++;
    }
    cout<<"count = "<<5<<endl;
    n = n/count;
    cout<<n;
}

int main(){
    Node* N1 = new Node();
    Node* N2 = new Node();
    Node* N3 = new Node();
    Node* N4 = new Node();
    Node* N5 = new Node();
    Node* N6 = new Node();



    N1->num = 1; 
    N1->next = N2;  

    N2->num = 2;  
    N2->next = N3; 

    N3->num = 3; 
    N3->next = N4;  

    N4->num = 4;  
    N4->next = N5; 

    N5->num = 5;  
    N5->next = N6; 

    N6->num = 6;  
    N6->next = NULL;

    print(N1);
    sum(N1);
    great(N1);
    avg(N1);
    return 0;
}