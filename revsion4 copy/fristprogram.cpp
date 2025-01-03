#include<iostream>
using namespace std;

int star(int a){
    for (int  i = 1; i <= a; i++)
    {
        for (int  j = 1; j <=i; j++)
        {
            cout<<"*";

        }
        cout<<endl;
    }
}
    
    int main(){
        star(2);
        star(3);
        star(4);
        star(5);
        
    }
   