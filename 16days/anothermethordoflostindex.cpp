
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
    int x=15 ;
   
    int idx = -1 ;
     
     for ( int  i = v.size()-1 ; i <=0; i--)
     {
       if (v [i] ==x)
       idx =i;
       break;

     }
     cout <<idx;

    }