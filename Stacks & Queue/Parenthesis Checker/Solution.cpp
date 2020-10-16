/*...Code by Utkarsh kumar ....*/
/*...NIT MEGHALAYA...*/
#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool is_Valid(string s)
{
    int i = 0;
    stack<char> st;
    while (i < s.size())
    {
        if (s[i] == '{' || s[i] == '(' || s[i] == '[')
            st.push(s[i]);
        else
        {
            char temp;
            if (st.empty() == false)
                temp = st.top();
            else
                return false;
            if (temp == '{' && s[i] != '}')
                return false;
            if (temp == '[' && s[i] != ']')
                return false;

            if (temp == '(' && s[i] != ')')
                return false;
            if (st.empty() == false)
                st.pop();
            else
                return false;
        }
        i++;
    }
    if (st.size() == 0)
        return true;
    return false;
}
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        string str;
        cin >> str;
        if (is_Valid(str))
            cout << "balanced\n";
        else
        {
            cout << "not balanced\n";
        }
    }
    return 0;
}
