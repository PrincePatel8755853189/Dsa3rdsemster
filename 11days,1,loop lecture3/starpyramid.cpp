#include <iostream> 
using namespace std;
int main(){
    int n;
    cout <<"enter the value";
    cin>>n;
    for ( int  i = 0; i <=n; i++)
    {
       //for space 
       for (int  j = 0; j <=n-i; j++)
       {
        cout<<" "; 

       }
       for ( int   j= 1; j <=2*i-1; j++)
       {
        cout<<"*";
       }
       
      cout<<endl; 
    }
    

}