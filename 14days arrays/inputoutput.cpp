#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the number";
    cin>>n;
    int marks [n];
    //input data 
    for (int  i = 0; i < n-1; i++)
    {
        cin>>marks[i];

    }
    //output Data
     for (int  i = 0; i < n-1; i++)
    {
        cout<<marks[i]<<endl;

    }
   
}