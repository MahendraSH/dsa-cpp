// 4.##Longest Common Prefix

// ``` Write a function to find the longest common prefix string amongst an array of strings.If there is no common prefix, return an empty string "".
// ```

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> a;
    for (int i = 0; i < n; i++)
    {
        string t;
        cin >> t;
        a.emplace_back(t);
    }
}