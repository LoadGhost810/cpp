#include <iostream>

using namespace std;

int lin(int array[],int size,int searchValue){
    for (int i = 0;i<size;i++){
        if (searchValue == array[i]){
            return i;}
    }
    return -1;
}

int main(){
    int a[] = {15,23,7,45,87,16};


    //user input
    int userValue;
    cout<<"Enter nu to search: ";
    cin>>userValue;

    int size = sizeof(a)/ sizeof(a[0]);

   int result = lin(a, size, userValue);
   if (result == -1){
    cout<<"Element no found";
   }
   else{
    cout<<"Element found in index: "<<result;
   }
    return 0;
}