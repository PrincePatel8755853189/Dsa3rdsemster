#include <iostream>
using namespace std;

int main()
{

    string name;
    getline(cin, name);
    cout << name << endl;

    for (int i = 0; i != '\0'; i++)
    {
        int zero = 0;
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'o')
        {
            cout << zero++;
        }
         cout << zero ;
    }
   
}