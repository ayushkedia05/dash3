#include <iostream>
using namespace std;
int main()
{
	int n,val,ar[40],nwarr[4],b;
	cout<<"enter values in array";
	for(int i=0;i<n;i++)
		cin>>ar[i];
	cout<<"enter value you wnt";
	cin>>val;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
			{
				if(ar[i] + ar[j] +ar[k] ==val)
				{
					nwarr[0]=ar[i];
					nwarr[1]=ar[j];
					nwarr[2]=ar[k];
					b++;

				}

			}
		}
	}	
if (b==1)
{	
for(int i=0;i<3;i++)
	cout<<nwarr[i];
}
else
cout<<"-1";

return 0;
}
