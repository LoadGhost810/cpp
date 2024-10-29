#include <iostream>

using namespace std;

class square{
    public:
        int width;
        int height;
    square(int width,int height){
        this->width = width;
        this->height = height;
    }
    void display(){
        int prod= width * height;
        cout<<"Answear: "<<prod;
    }
};


int main(){
    square sq(2,5);
    sq.display();
}