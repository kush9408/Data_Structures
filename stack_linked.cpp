#include<iostream>
using namespace std;
struct node
{
int data;
node* link;
}* top;
void push(int k)      //Here we are pushing at the begining of the linked list(we could also push at the end of linked list)
{
node* temp=new node();
temp->data=k;
temp->link=NULL;
if(top==NULL)
{
top=temp;
return ;
}
else
{
temp->link=top;
top=temp;
}
}
void pop()      // here we are popping the the first elemnt of the linked list
{
node* temp=top;
if(top==NULL)
{return;}
top=top->link;
delete(temp);
}
void display(node* k)
{
node* temp=top;
while(temp!=NULL)
{
cout<<temp->data<<"->";
temp=temp->link;
}
}
int main()
{
top=NULL;
push(2);
push(8);
display(top);
cout<<endl;
pop();
display(top);
cout<<endl;
return 0;
}

