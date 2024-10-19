// how to get the element back in stack after printig or poping
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    
    stack<int>temp;

   // we will use extra strack
   while (st.size()>0)
   {
    cout<<st.top()<<" ";
    int x = st.top();
    st.pop();
    temp.push(x);

   }
   cout<<endl;
   cout<<temp.top()<<" ";
    
    ///putting element back from temp to st

    // while (temp.size()>0)
    // {
    //     int x= temp.top();
    //     temp.pop();
    //     st.push(x);
        
    // }
    
}
