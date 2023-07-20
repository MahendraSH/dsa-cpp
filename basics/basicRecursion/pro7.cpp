// Problem Statement : You are given an array.The task is to reverse the array and print it.

#include <bits/stdc++.h>
using namespace std;
// Solution 1 : Using an extra array.
void display(int *a, int n);
void rev1(int *a, int n)
{
    int *b = new int[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = a[n - 1 - i];
    }
    display(b, n);
}
// Solution 2 : Space - optimized iterative method
void rev2(int *a, int n)
{
    int p1 = 0;
    int p2 = n - 1;
    while (p1 < p2)
    {
        swap(a[p1], a[p2]);
        p1++;
        p2--;
    }
    display(a, n);
}
void display(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
// Solution 3 : Recursive method
void rev3(int *a, int start, int end)
{
    if (start < end)
    {
        swap(a[start], a[end]);
        rev3(a, start + 1, end - 1);
    }
}
void rev4(int *a ,int n){
    reverse(a,a+n);
    display(a,n);
}
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    rev1(a, n);
    rev2(a, n);
    rev3(a, 0, n - 1);
    display(a, n);
    rev4(a,n);
}