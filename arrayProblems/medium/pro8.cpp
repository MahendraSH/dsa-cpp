// 8.##Problem Statement : Given an array Arr[] of integers, rearrange the numbers of the given array into the lexicographically next greater permutation of numbers.If such an arrangement is not possible, it must rearrange to the lowest possible order(i.e., sorted in ascending order).
#include <bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int> &a)
{

    int n = a.size();
    int index = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] < a[i + 1])
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        reverse(a.begin(), a.end());
        return;
    }
    for (int i = n - 1; i > index; i--)
    {
        if (a[i] > a[index])
        {
            swap(a[i], a[index]);
            break;
        }
    }
    reverse(a.begin() + index + 1, a.end());
    return;
}
void display(vector<int> &a)
{
    for (int i : a)
        cout << i << " ";
    cout << endl;
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
    return 0;
}
