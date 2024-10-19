#include <iostream>
#include <stack>
using namespace std;

// void displayrev (stack<int>&st)
// {
//     if (st.size()==0)return;

//     int x= st.top();
//     cout<<x<<" ";
//     st.pop();
//     displayrev(st);
//     st.push(x);

// }

void display(stack<int> &st)
{
    if (st.size() == 0)
        return;

    int x = st.top();

    st.pop();
    display(st);
    cout << x << " ";
    st.push(x);
}

void pushAtbottom(stack<int> &st, int val)
{
    if (st.size() == 0)
    {
        st.push(val);
        return;
    }

    int x = st.top();
    st.pop();
    pushAtbottom(st ,val);
    st.push(x);
}


void   reverse (stack <int> & st){
    if (st.size()==1)return;z
   
    
    int x = st.top();
    st.pop();
    reverse(st);
    pushAtbottom(st,x);
}
int main()
{

    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    display(st);
    
    cout << endl;
    reverse(st);
    cout << endl;
    display(st);
}