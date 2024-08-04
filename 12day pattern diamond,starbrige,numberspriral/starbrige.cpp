#include <iostream> 
using namespace std;
int main(){
    int n;
    cout <<"enter the value";
    cin>>n;
    int nsp = 1; 
    int m=n-1;
    for ( int  i = 0; i <=m; i++)
    {
       //for space 
       for (int  k = 0; k <=nsp; k++)
       {
        cout<<" "; 

       }
       nsp+=2;
       //number
       for ( int   j= 1; j <=2+1-1; j++)
       {
            cout<<j;
       }
            cout<<endl; 
    }
                           

}