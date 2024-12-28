//write a progarm to calcluate the sum of two number uasing pointer
#include<iostream>
using namespace std;

int main(){
    
    int n =2;
    int a =3;
    int * p1 =&n;
    int * p2 =&a;
    cout<<*p1  +*p2 ;
    return 0;
} 