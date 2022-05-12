// #include<stdio.h>
// // #include<string.h>
// // // struct emp
// // // {
// // // int a;
// // // };
// // int main()
// // {
// //     // struct emp e;
// // int a;
// // a=scanf("%d%d",&a,&a);
// //     printf("%d",a);
// //    return 0;
// // }
// // // int x=20;
// // //    printf("%c\n","abdefgh"[3]);
// //     // unsigned int res;
// //     // res=(64>>(2+1-2)) &(~(1<<2));
// //     // printf("%d\n",res);
// int sum(int);
// int main()
// {
// int b;
// b = sum(4);
// printf("%d", b);
// }
// int sum(int x)
// {
// int k=1;
// if(x<=1)
// return 1;k = x + sum(x-1);
// return k;
// }



#include <stdio.h>
#include <stdlib.h>
struct Node
{
int data;
struct Node *next;
}*first=NULL;
void create(int A[],int n)
{
int i;
struct Node *t,*last;
first=(struct Node *)malloc(sizeof(struct Node));
first->data=A[0];
first->next=NULL;
last=first;
for(i=1;i<n;i++)
{
t=(struct Node*)malloc(sizeof(struct Node));
t->data=A[i];
t->next=NULL;
last->next=t;
last=t;
}
}
struct Node * LSearch(struct Node *p,int key)
{

while(p!=NULL)
{
if(key==p->data){

return p;
}
p=p->next;
}
return NULL;
}
struct Node * RSearch(struct Node *p,int key)
{
if(p==NULL)
return NULL;
if(key==p->data)
return p;
return RSearch(p->next,key);
}
int main()
{
struct Node *temp;
int A[]={3,5,7,10,25,8,32,2};
create(A,8);
temp=LSearch(first,25);
printf("%d",temp->data);
return 0;
}