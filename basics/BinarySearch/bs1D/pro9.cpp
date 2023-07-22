
// 9.##Problem Statement : Given an integer array arr of size N, sorted in ascending order(may contain duplicate values) and a target value k.Now the array is rotated at some pivot point unknown to you.Return True if k is present and otherwise, return False.
#include <bits/stdc++.h>
using namespace std;
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
}