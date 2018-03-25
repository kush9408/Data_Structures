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
int main()
{
cout<<"\t\t"<<"*****LINKED LIST*****"<<"\t"<<endl;
cout<<endl<<endl;
start=NULL;
rear=NULL;
char ch='y';
int data;
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

}
cout<<"The list is"<<endl;
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
