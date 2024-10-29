#include <iostream>

using namespace std;
struct stud {
    string name;
    string surname;
    int age;


 stud(string n,string s,int a){
    st.name= n;
    st.surname = s;
    st.age = a;
}};

void display(stud){

    cout<<"Name: "<<st.name<<"\n";
    cout<<"Surname: "<<st.surname<<"\n";
    cout<<"Age: "<<st.age<<"\n";

};
int main(){
    stud("khaya","moyo",21);
    display(st);
  
return 0;
}
