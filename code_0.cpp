#include <iostream>
#include<string.h>
using namespace std;


void swap(int &a, int &b){ // reference variable
    int t = a;
    a = b;
    b = t;
}


int main()
{
    
   int a, b;

   cout<<"enter a : ";
   cin>>a;
   cout<<"enter b : ";
   cin>>b;

   swap(a,b);

   cout<<"\nafter swaping\n";

   cout<<"a is : "<<a<<endl;
   cout<<"b is : "<<b<<endl;





    
    return 0;
}
