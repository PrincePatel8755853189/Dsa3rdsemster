#include <iostream> 
using namespace std;
int main (){

    int n,b;
    cout<<"Enter the number is row ";
    cin>>n;
    for(int i = 1; i<=n ;i++){
        for (int j = 1; j <=i; j++)//i and j are know as itrator
        {
          cout<<j ;
        }
      cout<<endl;
    }
}