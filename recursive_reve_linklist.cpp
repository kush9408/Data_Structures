#include<iostream>
using namespace std;
struct node
{
int data;
node *link;
};
node* start;
void insert(int data);
void display(node*);
void reverse(node*);
int main()
{
start=NULL;
insert(1);
insert(2);
insert(3);
insert(4);
insert(5);
display(start);
reverse(start);
cout<<endl;
display(start);
return 0;
}
void insert(int k)
{
node* temp=new node();
temp->data=k;
temp->link=NULL;
if(start==NULL)
{
start=temp;
return;
}
else
{
node* temp1;
temp1=start;
while(temp1->link!=0)
{
temp1=temp1->link;
}
temp1->link=temp;
}
}
void display(node* temp2)
{
node* temp=temp2;
while(temp!=NULL)
{
cout<<temp->data<<">";
temp=temp->link;
}
}
void reverse(node* p)
{
if(p->link==NULL)
{
start=p;
return;
}
reverse(p->link);
node* q=p->link;
q->link=p;
p->link=NULL;
}
