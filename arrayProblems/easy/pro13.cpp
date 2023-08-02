// Problem Statement : Given an array and a sum k, we need to print the length of the longest subarray that sums to k.
#include <bits/stdc++.h>
using namespace std;
//  using two loops
int sub_array_sum_given1(vector<int> a, long long k)
{
  int maxCount = 0;
  int n = a.size();
  for (int i = 0; i < n; i++)
  {
    int sum = 0;

    for (int j = i; j < n; j++)
    {
      sum += a[j];
      if (sum == k)
      {
        maxCount = max(maxCount, (j - i + 1));
      }
      else if (sum > k)
      {
        break;
      }
    }
  }
  return maxCount;
}
// best using ( two pointer )
int sub_array_sum_given2(vector<int> a, long long k)
{
  int count = 0;
  int j = 0;
  long long sum = a[0];
  int n =a.size();
  for (int i = 0; i < n; i++){
       while(j<=i && sum > k){
        sum -=a[j];
        j++;
       }
       if(sum ==k)
       count = max(count, (i-j+1));

       sum += a[i+1];
  }
  return count;
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

  long long k;
  cin >> k;

  cout << " s1 =" << sub_array_sum_given1(a, k);
  cout << " s2=" << sub_array_sum_given2(a, k);
}