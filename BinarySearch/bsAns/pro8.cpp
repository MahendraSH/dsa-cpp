// 8.##Problem Statement : You are given an array ‘arr’ of size ‘n’ which denotes the position of stalls.You are also given an integer ‘k’ which denotes the number of aggressive cows.You are given the task of assigning stalls to ‘k’ cows such that the minimum distance between any two of them is the maximum possible.Find the maximum possible minimum distance.
#include <bits/stdc++.h>
using namespace std;

int isPossible(vector<int> &a, int k, int mid)
{
    int count = 1;
    int last = a[0];
    for (int i : a)
    {
        if (i - last >= mid)
        {
            last = i;
            count++;
        }

        if (count >= k)
        {
            return 1;
        }
    }
    return -1;
}
int findMaxdistancePossible(vector<int> &a, int k)
{
    sort(a.begin(), a.end());
    int start = 1;
    int end = a[a.size()-1] - a[0];
    while (start <=end)
    {
        int mid = start + (end - start) / 2;
        if (isPossible(a, k, mid) == 1)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return end;
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
    int k;
    cin >> k;
    cout << findMaxdistancePossible(a, k) << endl;
}