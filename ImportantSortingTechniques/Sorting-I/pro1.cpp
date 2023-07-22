// Problem Statement : Given an array of N integers, write a program to implement the Selection sorting algorithm.
#include <bits/stdc++.h>
using namespace std;
void sort_section(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        int maxele = 0;
        for (int j = 1; j < n - i; j++)
        {
            if (a[maxele] < a[j])
                maxele = j;

            swap(a[maxele], a[n - i - 1]);
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
        cin >> a[i];
    sort_section(a, n);
    display(a, n);
}