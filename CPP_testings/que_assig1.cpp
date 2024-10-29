#include <iostream>
#include <queue>

using namespace std;

class concert{
    public:
    queue<string>student;
    int limite = 5;


    void addStudent(string stud){
        if (student.size() < limite){
            student.push(stud);
        }
    };

    void display(){
        queue<string>tick = student;

        while(!tick.empty()){
            cout<<"stud: "<<tick.front()<<endl;
            tick.pop();
        }
    }

    void getRemainingSeats(){
        queue<string>tick = student;
        int rem =limite -tick.size();
        cout<<"Remaintng seats: "<<rem<<endl;
    }

    bool isFull(){
        return student.size() >= limite;
        
    }
};

int main(){
    concert mystud;

    mystud.addStudent("khaya");
    mystud.addStudent("gama");
    mystud.addStudent("jack");
    mystud.addStudent("hamza");
    mystud.addStudent("thuto");
    mystud.addStudent("luciano");
    mystud.getRemainingSeats();
    mystud.display();
    cout<<"Are seats full: "<<mystud.isFull();

    return 0;
}

