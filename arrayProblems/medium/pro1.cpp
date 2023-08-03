// 1.##Problem Statement : Given an array of integers arr[] and an integer target.1st variant : Return YES if there exist two numbers such that their sum is equal to the target.Otherwise, return NO.2nd variant : Return indices of the two numbers such that their sum is equal to the target.Otherwise, we will return {-1, -1}.Note : You are not allowed to use the same element twice.Example : If the target is equal to 6 and num[1] = 3, then nums[1] + nums[1] = target is not a solution.

#include <bits/stdc++.h>
using namespace std;
int bs(vector<int> a, int target, int start, int end)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (a[mid] == target)
        {
            return mid;
        }
        else if (a[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
string read2(int n, vector<int> a, int target)
{
    sort(a.begin(), a.end());
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = a[start] + a[end];
        if (mid == target)
        {

            return "YES";
        }
        else if (mid > target)
        {
            end--;
        }
        else
        {
            start++;
        }
    }

    return "NO";
}
string read1(int n, vector<int> a, int target)
{
    sort(a.begin(), a.end());
    int ans1 = -1;
    int ans2 = -1;
    for (int i : a)
    {
        int findT = target - i;
        if (findT > 0)
        {
            int b = bs(a, findT, 0, n - 1);
            if (b != -1)
            {
                ans2 = a[b];
                ans1 = i;
                return "YES";
            }
        }
    }
    return "NO";
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
    int target;
    cin >> target;
    cout << read1(n, a, target) << endl;
    cout << read2(n, a, target) << endl;
}