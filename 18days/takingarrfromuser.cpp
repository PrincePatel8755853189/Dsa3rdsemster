#include<iostream>
using namespace std;

int main(){
    
   int n;
   cout<<"Enter the numberof row ";
   cin>>n;
    
    int m;
   cout<<"Enter the numberof column ";
   cin>>m;
   int arr[n][m];


//for taking input
   for (int  i = 0; i <= n-1; i++)
   {
        for (int j = 0; j <= m-1; j++)
        {
            cin>>arr[i][j];
        }
        
   }


  //for giving output
   for (int  i = 0; i <= n-1; i++)
   {
        for (int j = 0; j <= m-1; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
   }
    
}