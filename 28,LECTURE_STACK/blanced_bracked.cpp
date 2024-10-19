
#include <iostream>
#include <stack>
using namespace std;

bool is_blanced_braced(string s)
{
    if (s.length() % 2 != 0) return false;
    stack<char> st;
    for (char i = 0; i < s.length(); i++)
    {
        if (s[i] = '(')
        {
            st.push(s[i]);
        }

        else {
                if (st.size() == 0)
                    return true;

                else
                    st.pop();
            }
    }
}
int main()
{

   string s= "())";
   cout << is_blanced_braced(s);
}