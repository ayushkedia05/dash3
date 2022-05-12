#include<iostream>
using namespace std;
struct node
{
  int data;
  node *next;
  node *prev;
} *first;
 void  create(int a[],int n)
 {
   struct node *t,*last;

   first = new node;
   first->data=a[0];
   first->next=NULL;
   first->prev=NULL;
    last=first;
    for(int i=1;i<n;i++)
    {
      t=new node;
      t->data=a[i];
      t->next=last->next;
      t->prev=last;
      last->next=t;
      last=t;


    }
 }

 void display(struct node *p)
 {
   while(p)
   {
     cout<<p->data<<"->";
     p=p->next;

   }
 }
 void insert(struct node *p,int index,int x)
 {
   struct node *t;
   if(index==0)
   {
     t=new node;
     t->data=x;
     t->next=first;
     t->prev=NULL;
     first->prev=t;
     first=t;
   }
else{
   for(int i=0;i<index-2;i++)
   p=p->next;
   t=new node;
     t->data=x;
     t->next=p->next;
     t->prev=p;
   if(p->next)
   p->next->prev=t;
   p->next=t;   
 }
 }





int main()
{
int a[]={1,2,3,4,5,6};
create(a,6);
insert(first,4,8);
display(first);
} 