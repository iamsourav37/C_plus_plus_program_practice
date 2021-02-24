#include <iostream>
#include<string.h>
using namespace std;



int main()
{
    
    int x = 8;

    int *p = &x;
    int **q = &p;

    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<*q;





    
    return 0;
}
