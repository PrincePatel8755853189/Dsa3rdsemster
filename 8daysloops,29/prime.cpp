// write a program to print the number is prime or not

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number ";
    cin >> n;
    bool flag = true;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            flag = false;
            
        }
        
         if (n == 1){cout << "THe number is niether prime nor composite";}
    else if (flag == true)
        cout << n << "The number is prime";
    else
        cout << "The number is composite";
        break;

    }

   
}