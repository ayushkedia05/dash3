#include <iostream>
using namespace std;
int main()
{
	int n,a,x,y;
	cin>>n;
	while(n>0)
	{
		n++;
		cin>>x>>y;
		if(x-y<0)
		{
		a=(y-x%2!=0)?1:(((x-y)/2)%2==0)?3:1;
		cout<<a<<endl;
		continue;
		}
		else if(x-y>0)
		{
		a=(x-y%2==0)?1:2;
		cout<<a<<endl;
		continue;
		}	
		else
			cout<<0;

	}
	return 0;


}