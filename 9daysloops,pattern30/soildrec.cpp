#include <iostream> 
using namespace std;
int main (){

    int n,b;
    cout<<"Enter the number is row ";
    cin>>n;
    cout<<"Enter the number is columns ";
    cin>>b;
    for(int i = 0; i<n ;i++){
        for (int j = 0; j < b; j++)
        {
          cout<<"*" ;
        }
      cout<<endl;
    }
}