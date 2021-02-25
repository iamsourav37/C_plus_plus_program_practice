// Write a program in C++ to find the factorial of a number.

#include <iostream>
using namespace std;

int get_factorial(int num){
    int result = 1;
    
    while(num> 0){
        result = result * num;
        num--;
    }
    
    return result;
}

int main() {

    int n;
    cout<<"Enter n: ";
    cin>>n;
    

    int fact = get_factorial(n);
    cout<<"factorial of "<<n<<" is "<<fact;


return 0;
}