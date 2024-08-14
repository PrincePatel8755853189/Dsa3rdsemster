#include<iostream>
using namespace std;
#include <vector>

void dis( vector < vector < int> > &v){
    v[0][1]=100;
}

void size( vector < vector < int> > &v){
cout<< v.size();
   
}
int main(){
    
    vector < vector < int> >v;

vector <int >v1;
v1.push_back(1);
v1.push_back(2);  
v1.push_back(3);
v1.push_back(4);  
v1.push_back(5);
v1.push_back(6); 

vector<int> v2;
v2.push_back (1);
v2.push_back(10);
v2.push_back(63);
v2.push_back(8);
v2.push_back(9);

vector<int> v3;
v3.push_back(12);
v3.push_back(56);
v3.push_back(89);
v3.push_back (0);

v.push_back(v1);
v.push_back(v2);
v.push_back(v3);

// dis(v);
// cout<< v[0][1]; 

size(v);
// cout<<size;


} 
   