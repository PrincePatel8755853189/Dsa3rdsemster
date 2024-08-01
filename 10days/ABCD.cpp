#include <iostream>
using namespace std;
// print the pattern 
// ABCD
// ABCD
// ABCD

int main (){

    int n,b;
    cout<<"Enter the number is row ";
    cin>>n;
        
        for (int  i = 0; i <=n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<(char)(j+65);
            }
           cout<<endl;
          
        }
       }
