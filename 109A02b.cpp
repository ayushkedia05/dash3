#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,m,a=0;
    cin>>n>>m;
    vector<int> arr(n+1,1);
    for(int i=2;i<=n;i++)
    {
        int b=m%i;
        a=a+arr[b];
        for(int j=b;j<=n;j+=i)
        arr[j]++;
    }
    cout<<a<<endl;
    }
    return 0;
}