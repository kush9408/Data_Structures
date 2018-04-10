#include<iostream>
using namespace std;
struct node
{
int data;
node* next;
node* prev;
};
node* start;
void insert(int);
void display(node*);
void insert_anypos(int,int);
void deleted(int);
int main()
{
int p,x;
start=NULL;
insert(1);
insert(2);
insert(3);
insert(4);
display(start);
cout<<endl<<"Enter the position to insert the node"<<endl;
cin>>p;
insert_anypos(5,p);
cout<<endl;
display(start);
cout<<endl<<"Enter the position of node which you want to delete"<<endl;
cin>>x;
deleted(x);
display(start);
return 0;
}
void insert(int k)
{
node* temp=new node();
temp->data=k;
temp->next=NULL;
temp->prev=NULL;
if(start==NULL)
{
start=temp;
return;
}
else
{
node* temp1=start;
while(temp1->next!=NULL)
{
temp1=temp1->next;
}
temp1->next=temp;
}
}
void display(node* n)
{
node* k=n;
while(k!=NULL)
{
cout<<k->data<<"->";
k=k->next;
}
}
void insert_anypos(int r,int pos)
{
node* p=start;
node* temp=new node();
temp->data=r;
temp->next=NULL;
temp->prev=NULL;
if(pos==1)
{
p->prev=temp;
temp->next=start;
start=temp;
}
else
{
for(int i=1;i<=pos-2;i++)
{
p=p->next;
}
temp->next=p->next;
temp->prev=p;
p->next=temp;
}
}
void deleted(int pos)
{
if(pos==1)
{
node* k=start;
node *q=k->next;
start=q;
q->prev=NULL;
delete(k);
return;
}
node* temp=start;
for(int i=1;i<=pos-2;i++)
{
temp=temp->next;
}
node* q=temp->next;
node* p=q->next;
temp->next=q->next;
p->prev=temp;
delete(q);
}







