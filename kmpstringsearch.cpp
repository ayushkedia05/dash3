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



unsigned int onesComplement(unsigned int n)
{
   
   int number_of_bits = floor(log2(n))+1;
  
   return ((1 << number_of_bits) - 1) ^ n;
}
    signed main()
    {
  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
      int t;
      cin>>t;
      while (t--)
      {   
       
        int n;
        cin>>n;
        vector<int> vec;
        for(int i=0;i<n;i++)
        {
    int a;
    cin>>a;
    vec.push_back(a);

        }

        int ans=0;

        int i=0;
        int j=n-1;
        int first=vec[0],second=vec[n-1];
        while(i<j)
        {
          // cout<<ans<<"\n";
         if(first==second)
         {
             ans=i+1+n-j;
           if(j-i>2)
           {
           i++;
           j--;
             first+=vec[i];
           second+=vec[j];
           }
           else
           {
             i++;
           j--;
           }
         }
         else if(first<second)
         {
           if(j-i>1)
           {
              i++;
              first+=vec[i];
           }
           else
           i++;
         }
         else
         {
           if(j-i>1)
           {
              j--;
              second+=vec[j];
           }
           else
           j--;
         }
        }


    cout<<ans;



cout<<"\n";
         
      
      }
        

      
      
      return 0;
    }