// // #include <iostream>
// // using namespace std;
// // int main()
// // {
// // 	int n,val,ar[40],nwarr[4],b;
// // 	cout<<"enter values in array";
// // 	for(int i=0;i<n;i++)
// // 		cin>>ar[i];
// // 	cout<<"enter value you wnt";
// // 	cin>>val;
// // 	for(int i=0;i<n;i++)
// // 	{
// // 		for(int j=0;j<n;j++)
// // 		{
// // 			for(int k=0;k<n;k++)
// // 			{
// // 				if(ar[i] + ar[j] +ar[k] ==val)
// // 				{
// // 					nwarr[0]=ar[i];
// // 					nwarr[1]=ar[j];
// // 					nwarr[2]=ar[k];
// // 					b++;

// // 				}

// // 			}
// // 		}
// // 	}	
// // if (b==1)
// // {	
// // for(int i=0;i<3;i++)
// // 	cout<<nwarr[i];
// // }
// // else
// // cout<<"-1";

// // return 0;
// // }








// #include <bits/stdc++.h>
// #include<iostream>
// #include<cmath>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int n,k,t;
// 	cin >> t;
// 	while(t--){
// 	    cin >> n >> k;
// 	    if(k>n || k < 0) continue;
// 	    int arr[n];
// 	    for(int i=0; i<n; i++)
// 	        arr[i] = i+1;
// 	    if(n%2 == 0){
// 	        for(int i=0; i<n; i++){
// 	            if(arr[i]%2 == 1)
// 	                arr[i] = -arr[i];
// 	           }
	            
// 	    } else if (n%2 == 1) {
// 	        for(int i=0; i<n; i++){
// 	            if(arr[i]%2 == 0)
// 	                arr[i] = -arr[i];
// 	           }
	            
// 	    }
// 	    int count = 0;
// 	    for(int i=0; i<n; i++){
// 	        if(arr[i] > 0)
// 	            count ++;
// 	    }
// 	    if (k>count) {
// 	        int diff = k-count;
// 	        for(int i=n-1; i>=0; i--){
// 	            if(diff>0 && arr[i]<0){
// 	                arr[i] = abs(arr[i]);
// 	                diff --;
// 	            }
// 	        }
// 	    } else if (k<count){
// 	        int diff = count-k;
// 	        for(int i=n-1; i>=0; i--){
// 	            if(diff>0 && arr[i]>0){
// 	                arr[i] = (-arr[i]);
// 	                diff --;
// 	            }
// 	        }
// 	    }
	        
// 	    for(int i=0; i<n; i++)
// 	        cout << arr[i] << " ";
// 	    cout << endl;
// 	 }
// 	return 0;
// }






#include<iostream>
using namespace std;
int mostrepeat(int ar[],int n)
{
    int count,index,x=0,y=1;
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(ar[i]==ar[j])
            count++;
        }
        if(count>x)
        {
        x=count;
        y=i;
        }
    }
    return y;
}
int main()
{
    int t,n,a;
    cin>>t;
    while(t--)
    {
        int e=0,o=0,sec=0,c=0,a=0;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        cin>>ar[i];
        for(int i=0;i<n;i++)
        {
            if(ar[i]%2==0)
            e++;
            else
            o++;
        }
         a=mostrepeat(ar,n);
         for(int i=0;i<n;i++)
         {
             if(ar[a]==ar[i])
             c++;
         }
        if(c!=1)
        { 
        if((ar[a]%2==1) && e>o && c!=1)
        {
            sec=e*1+(o-c)*2;
        }
        else if((ar[a]%2==0) && o>e && c!=1)
        {
            sec=o*1+(e-c)*2;
        }
        else if((ar[a]%2==0) && o<e)
        {
            int x1=e*1+(o-1)*2;
            int x2=(e-c)*2+(o)*1;
            if(x1>x2)
            sec=x2;
            else
            {
                sec=x1;
            }
            
        }
        else if((ar[a]%2==1) && o>e)
        {
            int x1=o*1+(e-1)*2;
            int x2=(o-c)*2+(e)*1;
            if(x1>x2)
            sec=x2;
            else
            {
                sec=x1;
            }
        }
         else if((ar[a]%2==1) && o==e)
         sec=o*1;
         else if((ar[a]%2==0) && o==e)
         sec=e*1;
        }
        else
        {
            if(o>e)
            sec=o*1+(e-1)*2;
            else
            sec=e*1+(o-1)*2;
        }
        
        cout<<sec<<endl;
    }
    return 0;
}