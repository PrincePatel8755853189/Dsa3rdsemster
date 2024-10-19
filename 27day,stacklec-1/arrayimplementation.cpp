#include <iostream> 
using namespace std;

class stack
{
    public:
    int arr[5];
    int idx;
    stack(){ 
        idx = -1;

    }

    void push (int val){
        if (idx ==sizeof(arr)/sizeof(arr[0])-1)
        {
           cout<<"stack is full !"<<endl;
           return;
        }
        idx++;
        arr[idx]=val;
    };
    void pop (int val){
        if (idx ==-1)
        {
           cout<<"stack is empty!"<<endl;
           return;
        }
        idx--;
     
    };
    int top(){
        if (idx==-1)
        {
           cout<<"stack is empty"<<endl;
           return-1;

        }
        return arr[idx];
    }

    int size(){
        return idx+1;
    }
};



int main(){
    stack st;
   cout<<st.top()<<endl;
   st.push(10);
   st.push(20);
   

   cout <<st.size()<<endl;
   cout <<st.top()<<endl;
   
   


}
