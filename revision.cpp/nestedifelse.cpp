//take positive interger input and tell if it is divisiable by 5 and 3 by uisng nested loop


#include <iostream> 
using namespace std;

int main (){

    cout <<"Enter the number is :"<<endl;
    int  n;
    cin>>n;
    if (n%5==0)
    {
        if (n%3==0)
        {
           cout<<"The number is divisible by 5 and 3";
        }
        
            
         }
    else{
            cout<<"The number is not divisible by 5 and 3";
        }

}