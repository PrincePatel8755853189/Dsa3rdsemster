#include <iostream> 
using namespace std;

class node {
public :
     int val;
     node* next;

     //creating construction

     node(int val){
        this-> val = val ;
        this->next = NULL;
     }

};

int main(){
     node a (10);
     node b (20);
     node c (30);
     node d (40);

    // a.next=NULL;
    // b.next=NULL;
    // c.next=NULL;
    // d.next=NULL;
    

    //formoring link list

    a.next = &b;
    b.next = &c;
    c.next = &d;

    // cout<<&a<<endl;
    // cout<<a.next;

    // cout <<(a.next)->val;
    // cout<<endl;
    // cout <<((a.next)->next)->val;
    // cout<<endl;

    node tem =a;


    while (1 )
    {
        cout<<tem.val<<" ";
       
        
             if (tem.next == NULL)break;
             tem = *(tem.next);
        
        
    }
}

