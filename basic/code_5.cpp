// Write a program in C++ to find the sum of first 10 natural numbers

#include <iostream>
using namespace std;
int main() {

    int N ;
    cout<< "enter N : ";
    cin>>N;

    int sum = N*(N+1)/2;
    cout<<"Sum of first "<<N<<" natural numbers : "<< sum <<endl;


    // using loop

    int using_loop_sum = 0;

    for(int i=1; i<=N; i++){

        using_loop_sum += i;

    }

    cout<<"Using loop, sum is : "<< using_loop_sum;


return 0;
}