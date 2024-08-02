#include <iostream>
using namespace std;
int main(){
    //print The pattern  of rhombus
    int n;
    cout<<"Enter the vaule";
    cin>>n;

    for ( int  i = 1; i < n; i++)
    {
        //space
       for (int j = 1; j< n+1-i; j++)
       {
        cout<<" ";
       }

       for (int k = 1; k < n; k++)
       {
       cout<<"*";
       }
       
       cout<<endl;

    }
    
}