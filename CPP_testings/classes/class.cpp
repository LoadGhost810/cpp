#include <iostream>

using namespace std;


int main ()

    {

        vector<int> RichVector (4);

        for (auto& i = 0; i < RichVector.size(); i++)

        RichVector.at(i) = i;

        for (auto& i = 0; i < RichVector.size(); i++)

        cout<< RichVector.at(i)<<endl;

        return 0;

    }

