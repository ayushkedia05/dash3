#include<bits/stdc++.h>
using namespace std;
long long binpow(long long a, long long b) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
  int t;
  cin>>t;
  while(t--)
  {
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  long long zeros1=pow(10,b);

  zeros1=(1ll*a)*zeros1;

  long long zeros2=pow(10,d);
  zeros2=(1ll*c)*zeros2;

  if(zeros1==zeros2)
  cout<<"=";
  else if(zeros1>zeros2)
  cout<<">";
  else
  cout<<"<";
  
  

     cout<<"\n";



   
  
  


  
  }
  return 0;
}