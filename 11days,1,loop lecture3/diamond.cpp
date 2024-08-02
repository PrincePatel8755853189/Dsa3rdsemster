#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value";
    cin>>n;

    for (int  i = 1; i <= n; i++)
    {   
        //forspace
       for (int  j = 1; j <= n-i; j++)
       {
        cout<<" ";
       }
       //for star5

       if (i<n)
       {
        for (int k = 1; k <= 2*i-1; k++)
       {
        cout<<"*";
       }
       }
       
      
       
       cout<<endl;
    }
}
