#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "no of line";
    cin >> n;
    int nst = 1;
    int nsp = n-1;

    for (int i = 1; i <= 2*n-1; i++)
    {
        // forspace
        for (int j = 1; j <= nsp; j++)
        {
            cout << " ";
        }

        if (i <= n-1 )nsp--;
        else nsp++;

        // star
        for (int k = 1; k <= nst; k++)
        {
            cout <<"*";
        }

        if (i <= n - 1)
            nst += 2;
        else
            nst -=2;

        cout << endl;
    }
}
