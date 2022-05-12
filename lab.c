#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct node * ptr;
};
typedef struct Node *Node;

Node first=NULL;
// first=NULL;

void insert_front()
{
int a;
printf("enter thr element \n");
scanf("%d",&a);
Node t;
t=(Node)malloc(sizeof(Node));
t->data=a;
t->ptr=NULL;

if(first==NULL)
{
first=t;
}
else
{
    
t->ptr=first;
first=t;

}
}


void insert_end()
{
Node temp;

int a;
printf("enter thr element \n");
scanf("%d",&a);
Node t;
t=(Node)malloc(sizeof(Node));
t->data=a;
t->ptr=NULL;
if(first==NULL)
{
first=t;
}
else
{
temp=first;
while(temp->ptr!=NULL)
{
temp=temp->ptr;
}
temp->ptr=t;


}

}


void dis()
{
Node temp;
if(first==NULL)
printf("empty list");
else
{
temp=first;
while(temp!=NULL)
{
printf("%d ->",temp->data);
temp=temp->ptr;
}
}

}
int main()
{
int ch;
while(1)
{
    printf("\n 1 insert front, 2 display \n");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1: insert_front();        break;
    case 2: dis();        break;

    
    default: printf("invalid optup");
    // getch();
    exit(0);
        break;
    }
}
} 




