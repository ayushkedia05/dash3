// #include<bits/stdc++.h>
// using namespace std;
// int power(int a)
// {
//   int i=1;
//   while(pow(2,i)<a)
//   i++;
//   return pow(2,i);
// }
// int main()
// {
//   int t;
//   cin>>t;
//   while(t--)
//   {
//   int c,max=0,v,b;
//   cin>>c;
//   int s=power(c);
//   for(int i=1;i<=s-1;i++)
//   {
//     for(int j=i+1;j<s;j++)
//     {
//      if((i^j)==c)
//      {
//        if(i*j>max)
//        max=i*j;
//        v=i;
//        b=j;
//      }
//     }
//   }
//   cout<<max<<endl;
//   }
//   return 0;
// }



#include<bits/stdc++.h>
using namespace std;
int check(int ar[],int i)
{
  int d=0;
  for(int j=i-1;j>=0;i--)
  {
    d+=ar[j]*pow(10,j);
  }
  return d;
}
int ayush(int n) 
{ 
 cout<<"aaaa";
    int binaryNum[32]; 
    int a[32],b[32];
  
   int i = 0; 
    while (n > 0)
     {  
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
       a[i-1]=1;
       b[i-1]=1;
    for (int j = i - 2; j >= 0; j--) 
        {
          if(binaryNum[j]==1)
          a[j]=0;
          else
          b[j]=1;
          if(binaryNum[j]==0)
          {
          a[j]=1;
          b[j]=1;
          }
        }
     int f1 =check(a,i);
     int f2 =check(b,i);
     return f1*f2;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
 int n;
 cin>>n; 
  cout<<"ayush"<<endl;
 int ans= ayush(n);
  cout<<ans<<endl;
  }
  return 0;
}
