
//find  the last accurrence of x in the array ;
#include<iostream>
using namespace std;
#include <vector>

int main(){
    
    vector <int > v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(8);
    v.push_back(5);
    v.push_back(15);
    v.push_back(9);
    int x ;
    cin>>x;
    int idx = -1 ;
     
     for ( int  i = 0; i <v.size(); i++)
     {
       if (v [i] ==x)
       idx =i;

     }
   
    cout<<idx;
    }
