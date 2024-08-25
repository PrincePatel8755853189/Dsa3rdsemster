#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int arr[] = {-5, 5, 3, 4, 6};
    int n = 5;



    for (int i = 0; i < 5; i++)
    {
        cout << arr[i]<<" ";
    }
cout<<endl;
   

   

    for (int  i = 0; i < n-1; i++)
    {
    int j = 1; // Initialize j to 1
    while (arr[j] < arr[j-1])
    {
        swap(arr[j], arr[j-1]);
        j--;
    }
    
    }
    

    
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i]<<" ";
    }
    }