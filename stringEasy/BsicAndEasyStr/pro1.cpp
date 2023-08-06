// 1.##Remove outermost Paranthesis
// 1. ## Maximum Nesting Depth Of The Parentheses
#include <bits/stdc++.h>
using namespace std;
int maxDepth(string s)
{
    // Write your code here.

    int count = 0;
    int maxdeep = 0;
    for (auto i : s)
    {
        if (i == '(')
            count++;
        else if (i == ')')
            count--;
        maxdeep = max(maxdeep, count);
    }
    return maxdeep;
}

string removeOuterParentheses(string s)
{
    string c;
    int n = s.length();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            count++;
        }
        else if (s[i] == ')')
        {
            count--;
        }
        if ((s[i] == '(' && count > 1) || s[i] == ')' && count > 0)
        {
            c.push_back(s[i]);
        }
    }
    return c;
}
int main()
{
    string s;
    cin >> s;
    cout << removeOuterParentheses(s) << endl;
    cout << maxDepth(s) << endl;
}
