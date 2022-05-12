#include<iostream>
using namespace std;
struct queue
{
    int size;
    int front;
    int rear;
    int *arr;
};
void enqueue(queue *q,int x)
{
    if((q->rear+1)%q->size==q->front)
     cout<<"queue full";
     else
     {
    q->rear=(q->rear+1)%q->size;
    q->arr[q->rear]=x;
     }
}
void display(queue q)
{
    int z=q.size;
    for(int i=0-1;i<z;i++)
    {
   cout<<q.arr[i]<<" ";
    }
}
int dequeue(queue *q)
{
    int x=-1;
    if(q->rear==q->front)
    {
    cout<<"empty";
    }
    else
    {
        q->front=(q->front+1)%q->size;
        x=q->arr[q->front];
    }
    return x;
}

int main()
{
 struct queue q; 
 cout<<"enter size";
 cin>>q.size;
 q.arr=new int[q.size];
 q.front=q.rear=-1; 
 int x;
 for(int i=0;i<q.size;i++)
 {
 cin>>x;
 enqueue(&q,x);
 }
return 0;          
}