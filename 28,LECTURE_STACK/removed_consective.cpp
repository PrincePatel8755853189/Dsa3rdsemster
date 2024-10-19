#include <iostream>
#include<stack>
using namespace std;

 string removed_the_consective_duplicate(string s){
   stack<char> st;
   st.push(s[0]);
   for (int  i = 0; i <=st.size(); i++)
   {
    if (s[i]!=s.top())st.push(s[i]);
    
   }
   s="";
    
    


}

int main (){

    string s = "aaabbcccddfffgh";
    cout<<s;
    
}