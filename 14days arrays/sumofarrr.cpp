#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"Enter the number ";
    cin>>n;

    int arr[n];
    //for input 
    for (int i = 0; i <= n-1; i++)
    {
       cin>>arr[i];
    }
     int sum = 0;
    for (int i = 0; i <= n-1; i++)
    {
      sum = sum + arr[i];
      
       
        }

         cout<<endl<<"The sum of arr is "<<sum;
       
        

    
    return 0;
}