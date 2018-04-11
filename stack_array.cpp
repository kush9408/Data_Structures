#include<iostream>
using namespace std;
#define max 100
int a[max],top=-1;
void push(int x)
{
if(top==max-1)
{
cout<<"Error ,cannot push!"<<endl;
return;
}
top=top+1;
a[top]=x;
}
void pop()
{
if(top==-1)
{
cout<<"Error,array is empty"<<endl;
return ;
}
top--;
}
void print()
{
for(int i=0;i<=top;i++)
{
cout<<a[i]<<" ";
}
}
int main()
{
push(2); print(); cout<<endl;
push(4); print();cout<<endl;
push(9); print();cout<<endl;
pop(); print(); cout<<endl;
return 0;
}

