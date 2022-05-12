#include<iostream>
using namespace std;
class node
{
public:
node *lc;
int data;
node *rc;
};
class queue
{
    private:
    int front;
    int rear;
    int size;
    node **arr;
    public:
    queue(){
        front=rear=-1;
        size=10;
        arr=new node*[size];
        }
        queue(int size)
        {
        front=rear=-1;
        this->size=size;
        arr=new node*[this->size];
        }
        void enqueue(node *x);
        node* dequeue();
        int isempty(){return front==rear;}
        void display(); 
};

class tree
{
    public:
    node *root;
    tree(){root=NULL;};
    void createtree();
void preorder(){preorder(root);}
void preorder(node *p);
void postorder(){postorder(root);}
void postorder(node *p);
void inorder(){inorder(root);}
void inorder(node *p);
void levelorder(){levelorder(root);}
void levelorder(node *p);
int height(){return height(root);}
int height(node *root);
};
void tree::createtree()
{
    struct node *p,*t;
    int x;
    
    struct queue q(100);
    cout<<"enter root value"<<endl;
    cin>>x;
    root=new node;
    root->data=x;
    root->lc=root->rc=NULL;
    q.enqueue(root);

    while(!q.isempty())
    {
        p=q.dequeue();
        cout<<"enter left child of "<<p->data<<endl;
        cin>>x;
        if(x!=-1)
        {
        t=new node;
        t->data=x;
        t->lc=t->rc=NULL;
        p->lc=t;
        q.enqueue(t);
        }
        cout<<"enter right child of"<<p->data<<endl;
        cin>>x;
        if(x!=-1)
        {
         t->data=x;
         t->lc=t->rc=NULL;
         p->rc=t;
         q.enqueue(t);
        }
    }
}
void tree::preorder(struct node *p)
{
    if(p)
    {
        cout<<p->data;
        preorder(p->lc);
        preorder(p->rc);
    }
}
void tree::inorder(struct node *p)
{
if(p)
{
    inorder(p->lc);
    cout<<p->data;
    inorder(p->rc);
}
}
void tree::postorder(struct node *p)
{
if(p)
{
    postorder(p->lc);
    postorder(p->rc);
    cout<<p->data;
}
}


void queue::enqueue(node *x)
{
if(rear==size-1)
cout<<"full"<<"\n";
else
{
    rear++;
    arr[rear]=x;
}
}
node* queue::dequeue()
{
    node* y=NULL;
    if(front==rear)
    cout<<"empty"<<"\n";
    else
    {
          y=arr[front+1];
          front++;
    }
    return y;
}
void queue::display()
{
    for(int i=front+1;i<=rear;i++)
    cout<<arr[i];
    cout<<endl;
}
int main()
{
    tree t;
t.createtree();
cout<<"Preorder ";
t.preorder();
cout<<endl;
cout<<"Inorder ";
t.inorder();
cout<<endl<<endl;

return 0;
}