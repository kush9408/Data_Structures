#include<iostream>
using namespace std;
struct node
{
int data;
node* link;
} *start,*newptr,*ptr,*rear;
node* create_node(int x);
void insert_end(node*);
void display(node*);
void insert(int data,int n);
void deleted(int k);
int main()
{
cout<<"\t\t"<<"*****LINKED LIST*****"<<"\t"<<endl;
cout<<endl<<endl;
start=NULL;
rear=NULL;
char ch='y';
int data,pos=1,x,r;
while(ch=='y'||ch=='Y')
{
cout<<"Enter the data :";
cin>>data;
cout<<endl;
newptr=create_node(data);
if(newptr==NULL)
{
cout<<"Sorry!......node not created"<<endl;
exit(1);
}
else if(newptr!=NULL)
{
cout<<"Node created"<<endl;
}
cout<<"Now insertion at the end"<<endl;
insert_end(newptr);
cout<<endl;
display(start);
cout<<endl;
cout<<"Do you want to insert more nodes ?"<<endl;
cin>>ch;
cout<<"The list is"<<endl;
display(start);
}
cout<<"Now inserion at any position"<<endl;
cout<<"Do you want to insert at any position,enter position......or press zero(0) if you do not want to insert ?"<<endl;;
cin>>pos;
if(pos>0)
{
cout<<"Enter the data to enter"<<endl;
cin>>x;
insert(x,pos);
display(start);
}
else if(pos==0)
{
cout<<"terminate"<<endl;
}
cout<<"\n do you want to delete any node"<<endl;
cin>>r;
deleted(r);
display(start);
return 0;
}
node* create_node(int k)
{
ptr=new node();
ptr->data=k;
ptr->link=NULL;
return ptr;
}
void insert_end(node* np)
{
if(start==NULL&&rear==NULL)
{
start=rear=np;
}
else
{
rear->link=np;
rear=np;
}
}
void display(node* np)
{
while(np!=NULL)
{
cout<<np->data<<"->";

np=np->link;
}
}
void insert(int l,int s)
{
node* temp1=new node();
temp1->data=l;
if(s==1)
{start=temp1;}
node* temp2=start;
for(int i=0;i<s-2;i++)
{
temp2=temp2->link;
}
temp1->link=temp2->link;
temp2->link=temp1;
}
void deleted(int l)
{
node* temp1=start;
for(int i=0;i<l-2;i++)
{
temp1=temp1->link;
}
node* temp2=temp1->link;
temp1->link=temp2->link;
delete(temp2);
}


