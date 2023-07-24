// 10.##Problem Statement : Given an integer array ‘A’ of size ‘N’ and an integer ‘K’.Split the array ‘A’ into ‘K’ non - empty subarrays such that the largest sum of any subarray is minimized.Your task is to return the minimized largest sum of the split.A subarray is a contiguous part of the array.

#include <bits/stdc++.h>
using namespace std;
//  min is max ele
//  max is  sum of the  array
int findSum(vector<int> &a)
{
    int sum = 0;
    for (int i : a)
        sum += i;
    return sum;
}
int findMaxele(vector<int> &a)
{
    int maxele = a[0];
    for (int i : a)
    {
        maxele = max(maxele, i);
    }
    return maxele;
}
int isPossible(vector<int> &a, int k, int mid)
{
    int count = 1;
    int sum = 0;
    for (int i : a)
    {
        if (sum + i > mid)
        {
            sum = i;
            count++;
        }
        else
        {
            sum += i;
        }
    }
    return count > k ? 1 : -1;
}

int largestSumMinzed(vector<int> &a, int k)
{
    if (k > a.size())
    {
        return -1;
    }
    int start = findMaxele(a);
    int end = findSum(a);
    while (start <= end)
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
    return start;
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
    cout << largestSumMinzed(a, k) << endl;
}