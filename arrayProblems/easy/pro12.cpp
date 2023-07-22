// Problem Statement: Given a non-empty array of integers arr, every element appears twice except for one. Find that single one.

#include <bits/stdc++.h>
using namespace std;
//  using bruteForce
int findOneele1(vector<int> a)
{

    for (int i = 0; i < a.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < a.size(); j++)
        {
            if (count == 2)
            {
                break;
            }
            if (a[i] == a[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            return a[i];
        }
    }
    return -1;
}
// using map as hash
int findOneele2(vector<int> a)
{
    unordered_map<int, int> m;
    for (auto i : a)
    {
        m[i]++;
    }
    for (auto i : m)
    {
        if (i.second == 1)
        {
            return i.first;
        }
    }
    return -1;
}
//  using xor
int findONeele3(vector<int> a)
{
    int ans = 0;
    for (auto i : a)
    {
        ans ^= i;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a.emplace_back(temp);
    }
    cout << findOneele1(a) << endl;
    cout << findOneele2(a) << endl;
    cout << findONeele3(a) << endl;
}