#include<iostream>
using namespace std;

int main (){
cout <<"Enter the number";
int a,b;
char c;
cin >> a>> c >> b;
switch (c)
{
    case '+':
            cout<<a+b;
            break ;
    case '-':
            cout<<a-b;
            break ;
    case '*':
            cout<<a*b;
            break;

    case '/':
            cout<<a/b;
            break;
default:
    break;
}





}