// Problem Statement : Given two numbers N and M, find the Nth root of M.The nth root of a number M is defined as a number X when raised to the power N equals M.If the ‘nth root is not an integer, return -1.
#include <bits/stdc++.h>
using namespace std;
int findNthPower(int mid, int n)
{
  int ans = 1;
  for (int i = 0; i < n; i++)
  {
    ans *= mid;
  }
  return ans;
}
int findNthRoot(int n, int m)
{
  int start = 0;
  int end = m / n;
  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    int val = findNthPower(mid, n);
    if (val == m)
    {
      return mid;
    }
    else if (val > m)
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
int main()
{
  //  int n =3;
  // int m = 27;
  //  ans = 3; or result = 3;
  int n;
  cin >> n;
  int m;
  cin >> m;
  cout << findNthRoot(n, m) << endl;
}