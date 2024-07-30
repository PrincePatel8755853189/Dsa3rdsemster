#include <iostream> 
using namespace std; 
int main (){
    int n;
    cout<<"Enter the days number ";
    cin>>n;

    switch(n){
    case 1:
            cout<<"mondays"; 
            break;
   case 2:
            cout<<"tuesday"; 
            break;
   case 3:
            cout<<"wednestday"; 
            break;
   case 4:
            cout<<"Thuesday"; 
            break;
   case 5:
            cout<<"friday"; 
            break;
   case 6:
            cout<<"satday"; 
            break;
   case 7:
            cout<<"sundays"; 
            break;

    default:
            cout<<"invalid number";

    }
}