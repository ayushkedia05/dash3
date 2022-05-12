  #include <bits/stdc++.h>

  using namespace std;

int area(int x1,int y1,int x2,int y2,int x3,int y3)
{
  int ans=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
  return ans;
}

  int main() {
        ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      int t;
      cin>>t;
      
    while(t--)
    {
   
   int w,h,n;
   cin>>w>>h; 
   vector<vector<int>>vec;
   vector<pair<int,int>> aa;
   cin>>n;
   for(int i=0;i<n;i++)
   {
     int a;
     cin>>a;
     vec[0].push_back(a);
   }
   if((vec[0][n-1]-vec[0][0])>=h)
   aa.push_back(make_pair(0,(vec[0][n-1]-vec[0][0])));
   cin>>n;
   for(int i=0;i<n;i++)
   {
     int a;
     cin>>a;
     vec[1].push_back(a);
   }
   if((vec[1][n-1]-vec[1][0])>=h)
   aa.push_back(make_pair(1,(vec[1][n-1]-vec[1][0])));

   cin>>n;
   for(int i=0;i<n;i++)
   {
     int a;
     cin>>a;
     vec[2].push_back(a);
   }
   if((vec[2][n-1]-vec[2][0])>=w)
   aa.push_back(make_pair(2,(vec[2][n-1]-vec[2][0])));

   cin>>n;
   for(int i=0;i<n;i++)
   {
     int a;
     cin>>a;
     vec[3].push_back(a);
   }
  if((vec[3][n-1]-vec[3][0])>=w)
   aa.push_back(make_pair(0,(vec[3][n-1]-vec[3][0])));



  int m=aa[0].second,b=0;
   for(int i=1;i<aa.size();i++ )
   {
     if(aa[i].second>m)
     {
       m=aa[i].second;
       b=i;
     }
   }
int res;
   if(b==0)
   {
     res=area(vec[b][0],0,vec[b][vec[b].size()-1],0,vec[1][vec[1].size()/2],h);
   }
   else if(b==1)
   {
     res=area(vec[b][0],h,vec[b][vec[b].size()-1],h,vec[0][vec[0].size()/2],0);
   }
   else if(b==2)
   {
     res=area(0,vec[b][0],0,vec[b][vec[b].size()-1],w,vec[3][vec[3].size()/2]);
   }
   else if(b==3)
   {
     res=area(w,vec[b][0],w,vec[b][vec[b].size()-1],0,vec[2][vec[2].size()/2]);
   }
 

 cout<<res;
    cout<<"\n";
    }
    return 0;
  }