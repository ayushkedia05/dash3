#include <bits/stdc++.h>
using namespace std;

#define int long long
long long binpow(long long a, long long b)
{
  if (b == 0)
    return 1;
  long long res = binpow(a, b / 2);
  if (b % 2)
    return res * res * a;
  else
    return res * res;
}

unsigned highestPowerof2(unsigned x)
{

  x |= x >> 1;
  x |= x >> 2;
  x |= x >> 4;
  x |= x >> 8;
  x |= x >> 16;

  return x ^ (x >> 1);
}

int gcd(int a, int b)
{
  return b == 0 ? a : gcd(b, a % b);
}

signed main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n,k;
  cin >> n>>k;
  vector<int> vec,dp(k+1,0);
  for(int i=0;i<n;i++)
  {
    int a;
    cin>>a;
    vec.push_back(a);
  }
  dp[0]=1 ;
  sort(vec.begin(),vec.end());
  for(int i=0;i<n;i++)
  {
    for(int j=1;j<=k;j++)
    {
      if(j-vec[i]<0)
      break;  
      dp[j]=dp[j]+dp[j-vec[i]];
    }
  }
 if(dp[k]==1e9)
 cout<<-1;
 else
  cout<<dp[k];

  return 0;
}