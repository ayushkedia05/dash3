#include<iostream>
#include<vector>
using namespace std;
struct node
{
int data;
struct node *next;

}*front=NULL,*rear=NULL;

struct queue{
    struct node *front;
    struct node *rear;

};

void enqueue(int x)
{
  struct node *temp;
  temp=new node;
  if(temp==NULL)
  cout<<"full";
  else
  {
      temp->data=x;
      temp->next=NULL;
  }
  if(front==NULL)
  {
      front=rear=temp;
  }
  else
  {
      rear->next=temp;
      temp=rear;
  }

}

  int dequeue()
  {
        int xx=0;
        struct node *temp;
        temp=new node;
        if(front==NULL)
        return 0;
        else
        {
        xx=front->data;
        temp=front;
        front=front->next;
        delete temp;
        }
        return xx;

  }

  int isempty()
  {
      return front==NULL;
  }

  void bfs(int g[][7],int start,int n)
  {
   int i =start;
//    struct queue q  ; 
   int visited[7]={0};
   visited[i]=1;
   enqueue(i);

   while(!isempty())
    {
       i=dequeue();
       for(int j=1;j<n;j++)
       {
           if(g[i][j]==1 && visited[j]==0)
           {
               cout<<j<<"  ";
               visited[j]=1;
               enqueue(j);
           }
       }
  }
  }
  int g[7][7];
int main()
{
    int g[7][7]={
                 {0,0,0,0,0,0,0},
                 {0,0,1,1,0,0,0},
                 {0,1,0,0,1,1,0},                
                 {0,1,0,0,0,0,1},
                 {0,0,1,0,0,0,0},
                 {0,0,1,0,0,0,0},
                 {0,0,0,1,0,0,1}
                 };

               bfs(g,6,7);




            //    int t1;
            //    cin>>t1;
            //    while(t1--)
            //    {
            //        int k,maxdepth=0;
            //        cin>>k;
            //       vector<int> nodes(k);
            //       for(int j=0; j<k; j++)
            // {
            //     cin>>nodes[j];
            //     if(nodes[j]>maxdepth)
            //     {
            //         maxdepth = nodes[j];
                
            //     }
            // } 
            //    }
               
}