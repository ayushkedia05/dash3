#include<iostream>
using namespace std;
int main()
{

    int a=0,b=0,c=0;
    cin>>a>>b>>c;
    int a1=0,b1=0,c1=0;
    cin>>a1>>b1>>c1;

   int x,y;
   x=(b*c1-c*b1)/(a*b1-b*a1);
   y=(a1*c-c1*a)/(a*b1-b*a1);
   
//   x=x+125;
//   y=y+125;

int ar[50][50]={0};
int x1,x2,y1,y2;
x1=x-10;
x2=x+10;
y1=y-10;
y2=y+10;

for(int i=x1;i<x2;i++)
{
    y1=(c+a*i)/(-1*b);
    ar[i+25][y1+25]=1;
    // cout<<i<<" "<<y1<<endl;
}
for(int i=x1;i<x2;i++)
{
    y2=(c1+a1*i)/(-1*b1);
    ar[i+25][y2+25]=2;
    // cout<<i<<" "<<y2<<endl;

}

for(int i=0;i<50;i++)
{
    for(int j=0;j<50;j++)
    cout<<ar[i][j]<<" ";

    cout<<"\n";
}
return 0;
}