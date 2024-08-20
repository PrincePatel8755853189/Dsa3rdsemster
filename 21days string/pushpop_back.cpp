#include<iostream>
#include<string>
using namespace std;

int main(){
     
     string name;
     getline(cin,name);
     cout<<name<<endl;

    name.push_back('p');
    name.push_back('a');
    name.push_back('t');
    name.push_back('e');
    name.push_back('L');
         cout<<name<<endl;

         
    name.pop_back();
    name.pop_back();
    name.pop_back();
    name.pop_back();
    name.pop_back();


        cout<<name<<endl;    
   }