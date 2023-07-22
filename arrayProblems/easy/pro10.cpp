// Problem Statement : Given an integer N and an array of size N - 1 containing N - 1 numbers between 1 to N.Find the number(between 1 to N), that is not present in the given array.
#include <bits/stdc++.h>
using namespace std;
// Naive Approach(Brute - force approach) :
void findMissing1(int *a, int n)
{
    cout << "Naive Approach(Brute-force approach):" << endl;
    for (int i = 1; i <= n; i++)
    {
        bool found = false;
        for (int j = 0; j < n; j++)
        {
            if (i == a[j])
            {
                found = true;
                break;
            }
        }
        if (found == false)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}
// Better Approach(using Hashing) :
void findMissing2(int *a, int n)
{
    cout << " Better Approach (using Hashing):" << endl;
    int *hasha = new int[n];
    for (int i = 0; i < n; i++)
    {
        hasha[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        hasha[a[i] - 1] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (hasha[i] == 0)
        {
            cout << i + 1 << " ";
        }
    }
    cout << endl;
}
// Summation Approach :
void findMissing3(int *a, int n)
{
    int sum = (n * (n + 1)) / 2;
    int sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        sum1 += a[i];
    }
    cout << "Summation Approach:" << endl;
    cout << sum - sum1 << endl;
    return;
}
// XOR Approach:
int findMissing4(int *a, int N)
{
    //   https://takeuforward.org/arrays/find-the-missing-number-in-an-array/#optimal-approach-2
    int xor1 = 0, xor2 = 0;

    for (int i = 0; i < N - 1; i++)
    {
        xor2 = xor2 ^ a[i];    // XOR of array elements
        xor1 = xor1 ^ (i + 1); // XOR up to [1...N-1]
    }
    xor1 = xor1 ^ N; // XOR up to [1...N]

    return (xor1 ^ xor2); // the missing number
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
    findMissing1(a, n);
    findMissing2(a, n);
}