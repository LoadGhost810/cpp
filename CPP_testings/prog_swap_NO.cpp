#include <iostream>

using namespace std;

int main(){
    int a = 1;
    int b = 2;
    int c;

    c = a;
    a = b;
    b = c;

    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    return 0;
}