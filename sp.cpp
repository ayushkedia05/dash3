#include<bits/stdc++.h>
using namespace std;
vector<int> parent;
vector<int> level;
int n1;

int ans(int dn,vector<int> &node ,int h)
{
vector<int> vec(n1+1);
vec[dn]!=h;
while (parent[dn]!=-1)
{
    dn=parent[dn];
    vec[dn]=h;
}
int maxd=0;
dn=-1;
  for(int q : nodes)
        if(vec[q] != h && level[q] > maximumdepth)
        {
            maximumdepth = level[q];
            deepestnode = q;
        }

}






int main()
{
map<int,set<int>> ms;
int n,u,v;
cin>>n;
n1=n;
for(int i=0;i<n;i++)
{
  cin>>u>>v;
  ms[u].insert(v);
  ms[v].insert(u);
}
level.clear();
parent.clear();

vector<int> visited;

queue<int> bfs;
u=1;
parent[u]=-1;
level[u]=0;
bfs.push(u);
visited[u]=1;
while(!bfs.empty())

{
    int p=bfs.front();
    bfs.pop();
    set<int> child(ms[p].begin(),ms[p].end());
    for(int i: child)
    {
        parent[i]=p;
        level[i]=level[p]+1;
        visited[i]=1;
        bfs.push(i);
    }
}
int a;
cin>>a;
while(a--)
{
vector<int> node(n+1);
    int b;
    cin>>b;
    int md=0;
    int dn=-1;
    for(int i=0;i<b;i++)
    {
        int l;
        cin>>l;
        node.push_back(l);
        if(level[l]>md)
        {
            md=level[l];
            dn=l;
        }
    }
    
}
}