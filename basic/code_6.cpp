// Write a program in C++ to display n terms of natural number and their sum

#include <iostream>
using namespace std;
int main() {


    int N;
    cout<<"Enter N : ";
    cin>>N;

    int sum = 0;

    for(int i=1; i<=N; i++){
        sum += i;
        cout<< i << " ";
    }

    cout<<endl;

    cout<<"Sum is : "<<sum<<endl;
    


return 0;
}