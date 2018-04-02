// print linked in forward and reverse  direction using recurssion

#include<iostream>
using namespace std;
struct node
{
int data;
struct node* link;
};
node* start;
void insert(int );
void display(node*);
void display_rev(node*);
int main()
{
start= NULL;
insert(1);
insert(2);
insert(3);
insert(4);
insert(5);
cout<<endl;
display(start);
cout<<endl<<"Reversed linked list using reccursion is"<<endl;
display_rev(start);
cout<<endl;
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
while(temp1->link!=NULL)
{
temp1=temp1->link;
}
temp1->link=temp;
}
}
void display(node* np)
{
node* temp2=np;
if(temp2==NULL) return;
cout<<temp2->data<<"->";
display(temp2->link);
}
void display_rev(node* np)                       //  display(100)->display(200)->display(600)
{
node* temp3;
temp3=np;
if(temp3==NULL)
{
return;
}
display_rev(np->link);
cout<<np->data<<"->";
}
