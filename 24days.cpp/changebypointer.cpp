#include<iostream>
using namespace std;


class student{
public :
    string name;
    int rno ;
    float marks;
//creating constuction 
student (string name  , int rno ,float marks){
    (*this ).name   = name;
    this -> rno = rno;
    this -> marks  = marks ;
}

};


void change (student s){
    s.name = "nithesh" ;  
}



int main(){
    student s(" raghav ", 75 ,93.9);
    student* ptr = &s;
    cout << s.name<<endl ;
    ptr->name =" akhilesh";
    cout<<s.name<<endl;


}