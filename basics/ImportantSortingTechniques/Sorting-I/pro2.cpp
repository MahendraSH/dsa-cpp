// Problem Statement : Given an array of N integers, write a program to implement the Bubble Sorting algorithm.
#include <bits/stdc++.h>
using namespace std;

void sort_bubble(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }
}
void display(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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

    sort_bubble(a, n);
    display(a, n);
}