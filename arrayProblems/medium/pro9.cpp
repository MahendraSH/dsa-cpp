// 9.##Problem Statement : Given an array, print all the elements which are leaders.A Leader is an element that is greater than all of the elements on its right side in the array.
#include <bits/stdc++.h>
using namespace std;
vector<int> superiorElements(vector<int> &a)
{
    // Write your code here.
    int n = a.size();
    vector<int> ans;
    ans.emplace_back(a[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        if (ans.back() < a[i])
            ans.emplace_back(a[i]);
    }
    return ans;
}
void display(vector<int> a)
{
    for (int i : a)
        cout << i << " ";
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int tem;
        cin >> tem;
        a.emplace_back(tem);
    }
    display(superiorElements(a));
}