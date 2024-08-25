#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
float max(float a, float b)
{
    if (a >= b)
        return a;
    else
        return b;
}

float min(float a, float b)
{
    if (a < b)
        return a;
    else
        return b;
}
int main()
{

    int arr[] = {5, 3, 10};
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    float kmin = (float)(INT_MIN);
    float kmax = (float)(INT_MAX);
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= arr[i + 1])
        {
            kmin = max(kmin,( arr[i] + arr[i + 1]) / 2.0);
        }

        else
        {
            kmin = min(kmin, (arr[i] + arr[i + 1]) / 2.0);
        }
    }
    if (kmin>kmax)
    {
        flag = false;
       
    }
}