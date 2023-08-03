// Problem Statement : Given an array and a sum k, we need to print the length of the longest subarray that sums to k.
#include <bits/stdc++.h>
using namespace std;
int sub_array_with_given_sum_posAndNeg(vector<int> a, int k)
{

    int count = 0;
    int j = 0;
    long long sum = 0;
    int n = a.size();
    map<int, int> tillSum;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum == k)
        {
            count = max(count, i + 1);
        }

        int rem = sum - k;
        if (tillSum.find(rem) != tillSum.end())
        {
            count = max(count, i - tillSum[rem]);
        }
        if (tillSum.find(sum) == tillSum.end())
        {
            tillSum[sum] = i;
        }
    }
    return count ;
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
}