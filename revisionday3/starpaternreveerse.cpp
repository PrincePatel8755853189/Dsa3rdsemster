#include <iostream> 
using namespace std;
int main (){

    int n,b;
    cout<<"Enter the number is row ";
    cin>>n;
        
        for (int  i = 0; i <=n; i++)
        {
            for (int j = 0; j < n+1-i; j++)
            {
                cout<< "*";
            }
            cout<<endl;
        }
        
        }
