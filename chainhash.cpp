#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

void SortedInsert(struct node **H,int x)
{
    struct node *t,*q=NULL,*p=*H;
    t=new node;
    t->data=x;
    t->next=NULL;

    if(*H==NULL)
    *H=t;
    else
    {
        while(p && p->data<x)
        {
            q=p;
            p=p->next;
        }
        if(p==*H)
        {
            
        }
    }
}
