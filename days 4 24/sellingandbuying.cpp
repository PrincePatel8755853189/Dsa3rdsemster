// wap if coast price and selling price of an item is input through the keyboad , write a program to 
// detemine werther the seller has made profits or loss also determine how much profits he made or loss he incurred
#include <iostream>
using namespace std;
int main (){
int a ;//a is the cost P
cout<<"Enter the value of the cp"<<endl;
cin>>a;
int b ;// b is the selling p
cout<<"Enter the value of the sp"<<endl;
cin>>b;
if (b>a)
{   
    cout<<"We got Profit"<<endl;
    int p=b-a;
    cout<<"Profit Amout"<<p<<endl;

}
else{
    cout<<"We got loss"<<endl;
    int p=b-a;
    cout<<"loss Amout"<<p<<endl;

}



}