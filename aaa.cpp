#include<iostream>
#include<algorithm>
using namespace std;
 struct job
 {
   int start,end,profit;
 };

 bool finishtime(job j1,job j2)
 {
  return (j1.end<j2.end);
 }

  int binarysearch(job jobs[],int index)
  {
  int low=0,high=index-1;

  while(low<=high)
  {
    int mid=(low+high)/2;
    if(jobs[mid].end<=jobs[index].start)
    {
     if()
    }
  }



  }


int maxprofit(job arr[],int n)
{
 sort(arr,arr+n,finishtime);
  
  int *table=new int[n];
  table[0]=arr[0].profit;

  for(int i=1;i<n;i++)
  {
   int inclprof=arr[i].profit;
  }

}
 int main()
 {
   int n;
   cin>>n;
   job arr[n];
   for(int i=0;i<n;i++)
   {
     cin>>arr[i].start>>arr[i].end>>arr[i].profit;
   }
    int maxpro=maxprofit(arr,n);
     cout<<maxpro;
     return 0;
 }