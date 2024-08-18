#include<iostream>
#include<string>
using namespace std;

int main(){
     
     string name;
     getline(cin,name);
     cout<<name<<endl;
    name[1]='o';
     cout<<name<<endl;

    cout<<name.length();
   }