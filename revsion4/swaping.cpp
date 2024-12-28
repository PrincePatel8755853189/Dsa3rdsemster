#include<iostream>
using namespace std;
void swaping (int a ,int b){
   int tem =a ;
   a=b;
   b=tem;
    return;
}
int main(){
    
    int a,b;
    cin>>a>>b;
    int temp = a;
    a=b;
    b=temp;
    cout<<a<<" "<<b;
    
}