#include<iostream>
using namespace std;
void insert(int n);

struct node
{
int data;
node* next;
};
node* start;
void display(node *);
void reverse(node *);
int main()
{
start=NULL;
insert(1);
insert(2);
insert(3);
insert(4);//1->2->3->4
display(start);  //1->2->3->4->
cout<<"Now reverse the linked list"<<endl;
reverse(start);  //iterative method to reverse a string
display(start);  // 4->3->2->1->
return 0;
}
void insert(int k)
{
node* temp=new node();
temp->data=k;
temp->next=NULL;
if(start==NULL)
{
start=temp;
return;
}
else
{
node* temp1;
temp1=start;
while(temp1->next!=NULL)
{
temp1=temp1->next;
}
temp1->next=temp;
}
}
void display(node* np)
{
node* temp2=np;
while(temp2!=NULL)
{
cout<<temp2->data<<"->";
temp2=temp2->next;
}
}
void reverse(node* np)
{
node* current=np;
node* prev=NULL;
node* next;
while(current!=NULL)
{
next=current->next;
current->next=prev;
prev=current;
current=next;
}
start=prev;
}
