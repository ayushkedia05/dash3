 #include<bits/stdc++.h>
 using namespace std;
 int main ()
 {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {  
    int n=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr +n);   
    int a=0,b=0,c=0;
    a= arr[0];
    b=arr[n];
    c=arr[n/2];
    cout<<abs(a-b)+abs(b-c)+abs(c-a)<<endl;

    }
    return 0;
 }