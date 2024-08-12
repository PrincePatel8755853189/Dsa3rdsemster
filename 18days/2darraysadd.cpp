#include<iostream>
using namespace std;
 
int main(){
    
    
   int n ;
   cout<<"enter the  row number "<<endl;;
    cin>>n;
   int m ;
   cout<<"enter the  column number "<<endl;
cin>>m;
   int arr[n][m];

   //for taking inputs 
   for (int  i = 0; i <= n-1; i++)
   {
        for (int  j = 0; j <=m-1; j++)
        {
            cin>>arr[i][j];
        }
        
   }
   cout<<endl;
    //for printing our arr 
   for (int  i = 0; i <= n-1; i++)
   {
        for (int  j = 0; j <=m-1; j++)
        {
            cout<<arr[i][j]<<" ";
        }
         cout<<endl;
   }
     cout<<endl;
      

//       int p;
//    cout<<"enter the  row number ";

//    int q ;
//    cout<<"enter the  column number ";

//    int arr[p][q];

//    //for taking inputs 
//    for (int  i = 0; i <= n-1; i++)
//    {
//         for (int  j = 0; j <=m-1; j++)
//         {
//             cin>>arr[i][j];
//         }
        
//    }
//    cout<<endl;
//     //for printing our arr 
//    for (int  i = 0; i <= n-1; i++)
//    {
//         for (int  j = 0; j <=m-1; j++)
//         {
//             cout<<arr[i][j];
//         }
        
//    }
//      cout<<endl;
 int r ;
   cout<<"enter the  row number "<<endl;;
    cin>>r;
   int p;
   cout<<"enter the  column number "<<endl;
cin>>p;

   int arr1[r][p];

   //for taking inputs 
   for (int  i = 0; i <= r-1; i++)
   {
        for (int  j = 0; j <=p-1; j++)
        {
            cin>>arr1[i][j];
        }
        
   }
   cout<<endl;
    //for printing our arr 
   for (int  i = 0; i <= p-1; i++)
   {
        for (int  j = 0; j <=p-1; j++)
        {
            cout<<arr1[i][j]<<" ";
        }
         cout<<endl;
   }
     cout<<endl;

    
       int result[m][r];
       //for printing our arr 
   for (int  i = 0; i <= m-1; i++)
   {
        for (int  j = 0; j <=r-1; j++)
        {
            result[i][j]= arr[i][j] +arr1[i][j];
        }
         cout<<endl;
   }

  for (int  i = 0; i <= m-1; i++)
   {
        for (int  j = 0; j <=r-1; j++)
        {
            cout<<result[i][j]<<" ";
        }
         cout<<endl;
   }
}