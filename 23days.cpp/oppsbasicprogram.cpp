#include <iostream>
using namespace  std;
class book{
//  private:
public:   
    char name ;
    int price ;
    int noOfpage;


    int countbook (int p){
        if (price < p )
        return 1;
        else 
            return 0;
    }
    
    bool isBOOkprresent(char book){
        if (name ==book)
            return true;
        else false;

    
    }

};

int main (){
    book harypotter;
    harypotter.name = 'h';
    harypotter.price = 1000;
    harypotter.noOfpage =500;

    cout <<harypotter.isBOOkprresent('h')<<endl;
     cout <<harypotter.countbook(200)<<endl;



}