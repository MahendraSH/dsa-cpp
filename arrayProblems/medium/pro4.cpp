// 4.##Problem Statement : Given an integer array arr, find the contiguous subarray(containing at least one number) which has the largest sum and returns its sum .
#include <bits/stdc++.h>
using namespace std;
long long findMaxSumSubarray(vector<int> a)
{
    long long sum = 0;
    long long maxSum = LONG_LONG_MIN;
    for (int i : a)
    {
        sum += i;
        maxSum = max(maxSum, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return maxSum;
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

    cout << findMaxSumSubarray(a);
}