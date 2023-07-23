// 4.##Problem Statement : You are given ‘N’ roses and you are also given an array ‘arr’ where ‘arr[i]’ denotes that the ‘ith’ rose will bloom on the ‘arr[i] th’ day.You can only pick already bloomed roses that are adjacent to make a bouquet.You are also told that you require exactly ‘k’ adjacent bloomed roses to make a single bouquet.Find the minimum number of days required to make at least ‘m’ bouquets each containing ‘k’ roses.Return - 1 if it is not possible.
#include <bits/stdc++.h>
using namespace std;
int findMaxDay(vector<int> &a)
{
    int maxele = a[0];
    for (int i : a)
    {
        maxele = max(maxele, i);
    }
    return maxele;
}
int findifPossble(vector<int> &a, int mid, int m, int k)
{
    int count = 0;
    int countm = 0;
    for (int i : a)
    {
        if (i <= mid)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        if (count == k)
        {
            count = 0;
            countm++;
        }
    }
    if (countm >= m)
    {
        return 0;
    }
    return -1;
}
int minDays(vector<int> &a, int m, int k)
{
    int start = 0;
    int end = findMaxDay(a);
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        int val = findifPossble(a, mid, m, k);
        if (val < 0)
        {
            start = mid + 1;
        }
        else
        {
            ans = val == 0 ? mid : -1;
            end = mid - 1;
        }
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

    int m;
    cin >> m;
    int k;
    cin >> k;
    cout << minDays(a, m, k);
}