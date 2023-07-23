// 5.##Problem Statement : You are given an array of integers ‘arr’ and an integer i.e.a threshold value ‘limit’.Your task is to find the smallest positive integer divisor, such that upon dividing all the elements of the given array by it, the sum of the division’s result is less than or equal to the given threshold value.
#include <bits/stdc++.h>
using namespace std;
int findMax(vector<int> &a)
{

    int maxele = a[0];
    for (int i : a)
    {
        maxele = max(maxele, i);
    }
    return maxele;
}
int isPossible(vector<int> &a, int limit, int mid)
{
    int sum = 0;
    for (int i : a)
    {
        sum += i / mid + (i % mid == 0 ? 0 : 1);
    }
    if (sum <= limit)
    {
        return 1;
    }
    return -1;
}
int findMinDivisor(vector<int> &a, int limit)
{
    int start = 1;
    int end = findMax(a);
    int ans = -1;
    while (start <= end)
    {

        int mid = start + (end - start) / 2;
        if (isPossible(a, limit, mid) == 1)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
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
    int limit;
    cin >> limit;
    cout << findMinDivisor(a, limit);
}
