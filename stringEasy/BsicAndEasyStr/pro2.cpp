// 2.##Reverse Words in a String

// ``` Problem Statement : Given a string s, reverse the words of the string.
// ```

#include <bits/stdc++.h>
using namespace std;
string strReverseWords(string &s)
{

    string ans = "";
    string temp = "";
    bool add = false;
    int start = 0;
    int end = s.length() - 1;
    while (s[start] == ' ')
    {
        start++;
    }
    while (s[end] == ' ')
    {
        end--;
    }

    for (int i = start; i <= end; i++)
    {
        if (s[i] == ' ' && add)
        {

            ans == "" ? ans = temp : ans = temp + " " + ans;
            temp = "";
            add = false;
        }
        else if (s[i] != ' ')
        {
            add = true;
            temp += s[i];
        }
    }
    if (temp != "")
    {
        ans == "" ? ans = temp : ans = temp + " " + ans;
    }
    return ans;
}
int main()
{
    string s;
    getline(cin, s);
    cout << strReverseWords(s) << endl;
}