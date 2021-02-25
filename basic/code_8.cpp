//  Write a program in C++ to check whether a number is prime or not
#include <iostream>
using namespace std;

bool is_prime(int num){
    int i = 2;

    while(i <= num/2){
        if(num % i == 0)
            return false;
        i++;
    }
        if(num % i == 0)
            return false;
    
    return true;
    
}

int main() {

    cout<<"***Prime number between 1 to 100***\n";

    int max = 100;

    for(int i=1; i<=max; i++){
        if (is_prime(i)){
            cout<<i<<endl;
        }
    }

    

return 0;
}