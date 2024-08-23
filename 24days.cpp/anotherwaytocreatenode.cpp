#include <iostream>
using namespace std;

class node {
public :
    int val;
    node*next;
    
    // creating constructor
    node (int val){
        this->val = val;
        this->next = NULL;
    }
};

int main(){
    node* a = new node (10);
    node* b = new node (20);
    node* c = new node (30);
    node* d = new node (40);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = NULL;


    temp = NULL;
    //for printing purpose
    while (temp !=NULL)
    {
       cout <<temp->val;
       temp = temp ->next;
    }
    
}