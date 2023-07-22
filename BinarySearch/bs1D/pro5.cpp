// 5.##Problem Statement : You’re given an unsorted array arr of n integers and an integer x.Find the floor and ceiling of x in arr[0..n - 1].The floor of x is the largest element in the array which is smaller than or equal to x.The ceiling of x is the smallest element in the array greater than or equal to x
#include <bits/stdc++.h>
using namespace std;
//  interative
int floor(vector<int> &a, int target)
{
    int start = 0;
    int end = a.size();
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
    return end;
}
int cell(vector<int> &a, int target)
{
    int start = 0;
    int end = a.size();
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
    int target;
    cin >> target;
    int floorNum = floor(a, target);
    cout << floorNum << " = " << a[floorNum] << endl;
    int cellNum = cell(a, target);
    cout << cellNum << " = " << a[cellNum] << endl;
}