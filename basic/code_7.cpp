// Write a program in C++ to find the perfect numbers between 1 and 500. Go to the editor
// The perfect numbers between 1 to 500 are:
// 6
// 28
// 496

#include <iostream>
using namespace std;


bool is_perfect(int num){

    int i = 2;
    int sum = 1;

    while(i <= num/2){

        if(num % i == 0){
            sum += i;
        }

        i++;
    }
    if (sum ==  num)
        return true;
    else
        return false;
}

int main() {

    cout<<"***Perfect Numbers between 1 to 500***\n";

    for(int i=1; i<=500; i++){
        if(is_perfect(i)){
            cout<< i<<endl;
        }
    }


return 0;
}