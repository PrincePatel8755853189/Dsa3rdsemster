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


  int x;
  cout <<"Enter the number that you went to search";
  cin>>x;
  bool flag = false ;
    for (int i = 0; i <= n-1; i++)
    {
      
       if (arr[i]==x)flag = true;
        
        }

        if (flag==true)
        {
          cout<<"The number is present";
        }
        if (flag==false)
        {
          cout<<"The number is not present";
        }
        

   
}