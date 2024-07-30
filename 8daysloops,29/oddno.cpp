// write a program to print the number is prime or not

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number ";
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        if (n%2==0) continue;
       { cout << i << endl;}
    }
}