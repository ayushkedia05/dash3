// #include<iostream>
// using namespace std;
// int count=0;
// void toh(int n,int a,int b,int c)
// {
// if(n>0)
// {
//   toh(n-1,a,c,b);
//   cout<<a<<","<<c<<endl;
//   count++;
//   toh(n-1,b,a,c);
// }
// }
// int main()
// {
// int n;
// cin>>n;
// toh(n,1,2,3);
// cout<<count;
// }



// #include <bits/stdc++.h>
// using namespace std;


// void isSubstring(string s1)
// {
// 	int m = s1.length();

// 		for (int j = 0; j < m; j++)
//         {
// 			if ( s1[j]=='p')
//             {
//              if(s1.substr(j,5)=="party")
//              {
//                  int i=j+2;
//                  s1[i]='w';
//                  s1[i+1]='r';
//                  s1[i+2]='i';
//              }
//             }
//         }	
//       cout<<s1<<endl;
// }

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
// 	string s1;
//     cin>>s1;
// 	isSubstring(s1);
//     }
// 	return 0;
// }



// #include<iostream>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int w1,w2,x,y,m;
//         cin>>w1>>w2>>x>>y>>m;
//         int a=w2-w1;
//         if(a<x*m || a>y*m)
//         cout<<"0";
//         else
//         cout<<"1";
//         cout<<endl;
//     }
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,a;
	    cin>>n>>m>>a;
	    int arr[n][m];
	    int c=a+1+1;
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=1;j<=m;j++)
	        {
	            if(i==1 && j==1)
	            continue;
	            int d=a+i+j;
	             c=c^d;
	        }
	    }
	    cout<<c<<endl;
	}
	
	return 0;
}

	
