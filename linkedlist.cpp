#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
}*first=NULL;


////////CREATE


void create(int arr[],int n)
{
    struct node *t,*last;
    first = new node;
    first->data=arr[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<=n;i++)
    {
        t =new node;
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}


///////////DISPLAY

void display(struct node *p) 
 {
while(p->next!=NULL)
{
cout<<p->data<<"->";
p=p->next;
}
}


///////SEARCH

node* search(struct node *p,int x)
{
   
    while(p!=NULL)
    {
if(p->data==x)
{
  
  return p;
}

p=p->next;
    } 
    return NULL;
}


////////inserting
void insert(int pos,int x)
{
    node *t,*p;
    if(pos==0)
    {
        t=new node;
        t->data=x;
        t->next=first;
        first=t;
    }
    else if(pos>0)
    {
        p=first;
        for(int i=0;i<pos-1 &&p;i++)      // &&p check for null that position is not greater than linkedlist
        p=p->next;
        if(p)
        {
            t=new node;
            t->data=x;
            t->next=p->next;
            p->next=t;
        }
    }
} 

/////DELETION

void remove(struct node *p,int x)
{
    // for deleting first node
    int y;
    p=first;
    first=first->next;
    y=p->data;
    delete p;

    // for deleting at other position
    struct node *q;
    q=new node;
    while(p->data!=x && p)   // for(int i=0;i<pos-1;i++)
    {
        q=p;
        p=p->next;
    }
    if(p)
    {
    q->next=p->next;
    y=p->data;
    delete p;
    }
}
int main()
{
int arr[]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
//cout<<n<<endl;
create(arr,n);
insert(6,6);
display(first);
struct node *y;
y=search(first,4);   
cout<<y->data;
return 0;
}





