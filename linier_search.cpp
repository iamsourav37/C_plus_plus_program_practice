 #include<iostream>
 using namespace std;


 int linearSearch(int arr[],int key,int sizeOfArray){

    for(int i=0; i<sizeOfArray; i++)
        if(key == arr[i])
            return i;


     return -1;
 }

 int main(){

    int sizeOfArray = 5;
    int arr[sizeOfArray];

    cout<<"Enter "<<sizeOfArray<<" the elements : \n";
    for(int i=0;i<sizeOfArray; i++)
        cin>>arr[i];


    int key;
    cout<<"Enter the search element : ";
    cin>>key;

    cout<<linearSearch(arr,key,sizeOfArray);





 }
