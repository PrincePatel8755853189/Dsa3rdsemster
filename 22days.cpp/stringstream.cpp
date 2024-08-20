#include<iostream>
#include<string>
#include <algorithm>
#include<sstream>
using namespace std;

int main(){
    string str = "prince is the student of uiet ";
    stringstream ss(str);
    string temp;
    while (ss >>temp){
        cout<<temp<<endl;
    }

    while (ss>> temp){
        cout <<temp<<endl;
    }
    return 0;
}