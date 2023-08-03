// 3.##Problem Statement : Given an array of N integers, write a program to return an element that occurs more than N / 2 times in the given array.You may consider that such an element always exists in the array.

#include <bits/stdc++.h>
using namespace std;
int findMajority(vector<int> a)
{
    int el;
    int count = 0;
    for (int i : a)
    {
        if (count == 0)
        {
            el = i;
            count = 1;
            continue;
        }
        i == el ? count++ : count--;
    }
    return count >= 0 ? el : -1;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int tme;
        cin >> tme;
        a.emplace_back(tme);
    }
    cout << findMajority(a);
}