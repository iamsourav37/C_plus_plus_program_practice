#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}


int main() {

    int x , y;

    cout<< "enter x : ";
    cin>>x;
    cout<<"enter y : ";
    cin>>y;

    swap(&x, &y);
    cout<<"after swaping\n";

    cout<<"x is : "<<x<<endl<<"y is : "<<y;



return 0;
}