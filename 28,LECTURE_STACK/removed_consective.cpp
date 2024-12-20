#include <iostream>
#include <stack>
#include <algorithm>
#include <math.h>
using namespace std;

string removed_the_consective_duplicate(string s)
{
    stack<char> st;
    st.push(s[0]);
    for (int i = 0; i <= st.size(); i++)
    {
        if (s[i] != st.top())
            st.push(s[i]);
    }
    while (st.size() < 0)
    {
        s += st.top();
        st.pop();
    }
    reverse(s.begin(), s.end());
    return s;
}

int main()
{

    string s = "aaabbcccddfffgh";
    cout << s << endl;
    s = removed_the_consective_duplicate(s);
    cout << s << endl;
}