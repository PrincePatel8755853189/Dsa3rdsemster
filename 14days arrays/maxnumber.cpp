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


  int max =arr[0];
  for (int  i = 1; i < n; i++)
  {
    if(max<arr[i])max=arr[i];
  }
  
cout<<"The max number is number in this arr"<<max;
   
}