    // #include<bits/stdc++.h>
    // using namespace std;
    // struct node
    // {
    // int x;
    // node *next;   
    // }*start,*ptr,*temp,*newptr;
    // node *create(int);
    // void ins_beg(node *);
    // void display(node *);
    // int main()
    // {
    // int a;
    // char ch='y';
    // start =NULL;
    // cout<<"\n press y for creating node";
    // cin>>ch;
    // while(ch=='y'||ch=='Y')
    // {
    //     cout<<"\n enter valueinto info part of node";
    //     cin>>a;
    // newptr=create(a);
    // if(newptr!=NULL)
    // cout<<"\n node created";
    // else
    // {
    //     cout<<"\n node not created";
    //     exit(0);
    // }
    // cout<<"\n insert node into begin location";
    // ins_beg(newptr);
    // cout<<"\n display linked list";
    // display(start);
    // cout<<"\n press y fro insrting more node";
    // cin>>ch;
    // }
    // return 0;
    // }    
    // node *create(int p)
    // {                                               
    // ptr = new node;                              
    // ptr->x=p; 
    // ptr->next=NULL;
    // return ptr;
    // }
    // void ins_beg(node *np)
    // {
    // if (start==NULL)
    // start=np;
    // else
    // {
    //     temp=start;
    //     start=np;
    //     np->next=temp;
    // }
    // }
    // void display(node *np)
    // {
    // while(np!=NULL)
    // {
    //     cout<<np->x<<"->";
    //     np=np->next;
    // }
    // }
    

#include<iostream>
using namespace std;
    struct node
    {
        int x;
        struct node *next;
    }   *first;
void create(int ar[],int n)
{ 
 int i;
 struct node *t,*last;
 first= new node;
 first->x=ar[0];
 first->next=NULL;
 last = first;
            
 for(i=1;i<n;i++)
 {
     t=new node;
     t->x=ar[i];
     t->next=NULL;
     last->next=t;
     last =t;
 }   
}

void display(struct node *p)
{
    while(p!=NULL)
    {
        cout<<p->x<<"->";
        p=p->next;
    }
}
    int main()
    {
    int arr[]={1,2,3,4,5};
    create(arr,5);
    display(first);
    }