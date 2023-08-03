// 4.##Problem Statement : Given an integer array arr, find the contiguous subarray(containing at least one number) which has the largest sum and returns its sum and prints the subarray.
#include <bits/stdc++.h>
using namespace std;
long long findMaxSumSubarraYAndPrint(vector<int> a)
{
    long long sum = 0;
    long long maxSum = LONG_LONG_MIN;
    int start = -1;
    int asnend = -1;
    int ansStart = -1;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (maxSum < sum)
        {
            maxSum = sum;
            ansStart = start;
            asnend = i;
        }
        if (sum < 0)
        {
            start = i;
            sum = 0;
        }
    }
    cout << "The sub arary ";
    for (int i = ansStart + 1; i <= asnend; i++)
    {
        cout << a[i] << " ";
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
    cout << findMaxSumSubarraYAndPrint(a);
}