#include <iostream>

using namespace std;

int main(){
    char N;

    // Corrected the loop to use single quotes for characters and fixed the loop condition
    for (char w = 'A'; w <= 'Z'; w++){
        cout << w << endl;
    }

    cout << "Enter a character: ";
    cin >> N;
    cout << endl;

    cout << "ASCII of " << N << " is " << (int)N << endl;

    return 0;
}
