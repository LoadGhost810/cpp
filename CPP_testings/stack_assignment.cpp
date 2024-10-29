#include <iostream>
#include <stack>

using namespace std;

int main(){
stack<string>student;

student.push("khaya");
student.push("gama");
student.push("thuto");
student.push("pre");




student.pop();
cout<<student.top()<<endl;
cout<<"the size is: "<<student.size()<<endl;

cout<<"boolean is empty: "<<student.empty();
cout<<endl;

while (!student.empty()){
    cout<<student.top()<<endl;
    student.pop();

}
}