//  Write a program in C++ to find the last prime number occur before the entered number.
// Sample Output:
// Input a number to find the last prime number occurs before the number: 50
// 47 is the last prime number before 50 

#include <iostream>
using namespace std;

bool is_prime(int num){
    int i = 2;

    while(i<num/2){
        if(num % i == 0)
            return false;
        i++;
    }

    return true;
}


int main() {
    
    int n;
    cout<<"enter n : ";
    cin>> n;

    for(int i = n; i>0; i--){
        if (is_prime(i)){
            cout<<i<<" is the last prime number before "<<n;
            break;
        }

    }



return 0;
}


