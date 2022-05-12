// #include<iostream>
// #include<list>
// #include<map>
#include<bits/stdc++.h>

using namespace std;
// class Graph
// {
//   int v; // number of vertices
//   list<int> *adj;
//   public:
//   Graph(int v);

//   void addedge(int x,int w);// add adge to graph 

//   void bfs(int s); //print bfs traversal from given source s

  
// };

// Graph::Graph(int v)
// {
//   this->v=v;
//   adj =new list<int>[v];
// }

// void Graph::addedge(int x,int w)
// {
//   adj[x].push_back(w);
// }
// void Graph::bfs(int s)
// {
//   bool *visited=new bool[v];
//   for(int i=0;i<v;i++)
//   visited[i]=false;


//   list<int> queue;
//   visited[s]=true;
//   queue.push_back(s);


//   list<int>::iterator i;

//   while(!queue.empty())
//   {
//     s=queue.front();
//     cout<<s<<"->";
//     queue.pop_front();

//     for( i=adj[s].begin();i!=adj[s].end();i++)
//     {
//       if(!visited[*i])
//       {
//         visited[*i]=true;
//         queue.push_back(*i);
//       }
//     }

//   }
// }


class Graph
{
  public:
  map<int, bool> visited;
  map<int ,list<int>> adj;

  void addedge(int v,int w);// #include<iostream>
// #include<list>
// #include<map>t v,int w);

  void dfs(int v);  

  
};

void Graph::addedge(int v,int w)
{
  adj[v].push_back(w);
}

void Graph::dfs(int v)
{
  visited[v]=true;
  cout<<v<<" ";

  list<int>::iterator i;
  for(i=adj[v].begin();i!=adj[v].end();i++)
  if(!visited[*i])
  dfs(*i);
}
int main()
{
  Graph g;
	g.addedge(0, 1);
	g.addedge(0, 2);
	g.addedge(1, 2);
	g.addedge(2, 0);
	g.addedge(2, 3);
	g.addedge(3, 3);

  // cout << "Following is Breadth First Traversal "
	// 	<< "(starting from vertex 2) \n";
	 g.dfs(2);

	return 0;
}