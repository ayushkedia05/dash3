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
        int n;
        cin>>n;
        if(n&1 || n==2)
        cout<<"NO";
        else
        cout<<"YES";        
          

        
        
        return 0;
      }