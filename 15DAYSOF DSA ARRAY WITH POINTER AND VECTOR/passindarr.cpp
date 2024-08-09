//wap to passs the arrays to  function
#include <iostream>
using namespace std;
 void  display (int a[]){
    for (int  i = 0; i <=5; i++)
    {
       cout<<a[i]<<" ";
    }
    cout<<endl;

 }

 void change(int b []){
    b[0] =3; //this is called insertion in the arrays

 }
 int main (){
    int arr[]={1,2,3,5,6,7};
 int size =sizeof(arr) / sizeof (arr[0]);
   cout<<size<<endl; 
    display (arr);//call by referrence
    change (arr);
    display (arr);
 }