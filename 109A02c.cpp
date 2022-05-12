// #include <iostream>
// using namespace std;
// int gcd(int a,int b)
// {
//     if(b==0)
//     return a;
//     return gcd(b,a%b);
// }
// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    int k,n=0,d;
// 	    cin>>k;
// 	    for(int i=1;i<=2*k;i++)
// 	    {
// 	        d=(i+1)*(i+1);
// 	        int s=gcd(k+d,k+i*i);
// 	        n=n+s;
// 	    }
// 	    cout<<n<<endl;
	    
// 	}
// 	return 0;
// }
#include<iostream>
using namespace std;
int fac(int a,int b)
{
	int c=0;
	for(int j=1;j<b;j++)
    { 
	if(a%j==0)
	c++;
    }	
return c;
}
int send(int q, int a)
{

float p=float(float(q)/float(a));
int l=q/a;
if(p<1)
return l;
if(p>l)
 l++;
 
return l;
} 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n,m,sum=0;
	cin>>n>>m;
	int arr[n];
	for(int i=1;i<=n;i++)
	{
		int a=m%i;
		a++;

		int b=send(n-i,a);
		
		//a=fac(a,i);
		//arr[i]=a;
		sum=sum+b;
	}
	
	cout<<sum<<endl;
	}
	return 0;
}