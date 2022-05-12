#include<iostream>
using namespace std;
struct stack
{
    int size;
    int top;
    int *s;
};
void create(struct stack *st)
{
  cout<<"enter size"<<endl;
  cin>>st->size;
  st->top=-1;
  st->s= new int[st->size];
}
void display(struct stack st)
{
    for(int i=st.top;i>=0;i--)
    cout<<st.s[i]<<endl;
}
void push(struct stack *st,int x)
{
    if(st->top==st->size-1)
    cout<<"no space left"<<endl;
    else
    {
        st->top++;
        st->s[st->top]=x;
    }
}
void pop(struct stack *st)
{
if(st->top==-1)
cout<<"empty"<<endl;
else
{
  int p=st->s[st->top];
  st->top--;
   cout<<p<<endl;
}
}
int peek(struct stack st,int index)
{
    int x=-1;
    if(st.top-index+1<0)
    cout<<"invalid";
    x=st.s[st.top-index+1];

    return x;
}
int main()
{
    int x;
    stack st;
    create(&st);
    cout<<"enter the values"<<endl;
     for(int i=0;i<st.size;i++)
     {
         cin>>x;
         push(&st,x);
     }
     display(st);

     pop(&st);
     display(st);
    return 0;
}