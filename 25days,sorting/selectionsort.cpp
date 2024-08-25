#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{

    int arr[] = {-5, 5, 3, 4, 6};
    int n = 5;

    for (int ele : arr)
    {
        cout << ele << " ";
    }

    cout << endl;

    for (int i = 0; i < n ; i++)
    {
        int mint= INT_MAX;
        int midx = -1;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] < mint)
            {
                mint = arr[j];
                midx = j;
            }
        }
        swap(arr[i], arr [midx]);
    }

    for (int ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;
}