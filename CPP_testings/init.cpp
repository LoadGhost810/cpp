#include <iostream>
#include <string>

using namespace std;

class School {
    private:
        string name;
        int grade;
    public:
        School() : name("Khaya"), grade(9) {}

        void display(){
        cout<<"Name: "<<name<<endl<<"Grade: "<<grade;
        }
};

int main() {
    School myschool;
    myschool.display();
    cin.get();
    return 0;
}

