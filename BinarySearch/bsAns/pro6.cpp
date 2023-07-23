// 6.##Problem Statement : You are the owner of a Shipment company.You use conveyor belts to ship packages from one port to another.The packages must be shipped within ‘d’ days.The weights of the packages are given in an array ‘of weights’.The packages are loaded on the conveyor belts every day in the same order as they appear in the array.The loaded weights must not exceed the maximum weight capacity of the ship.Find out the least - weight capacity so that you can ship all the packages within ‘d’ days.

#include <bits/stdc++.h>
using namespace std;
int findSum(vector<int> &a)
{
    int sum = 0;
    for (int i : a)
        sum += i;
    return sum;
}
int isPossibleToShip(vector<int> &a, int d, int mid)
{
    int sum = 0;
    int count = 1;
    for (int i : a)
    {
        if (mid < i)
        {
            return -1;
        }
        if (sum + i <= mid)
        {
            sum += i;
        }
        else
        {
            sum = i;
            count++;
        }
    }
    cout << "mid " << mid << "count " << count << endl;
    return count <= d ? 1 : -1;
}
int findMinCapcity(vector<int> &a, int d)
{

    int start = 1;        // min capcity
    int end = findSum(a); // max capcity
    int ans = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossibleToShip(a, d, mid) == 1)
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
    int d;
    cin >> d;
    cout << findMinCapcity(a, d) << endl;
}