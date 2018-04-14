#include<iostream>
#include<string.h>
using namespace std;
int top=-1;
char n[40];
void push(char);
int isempty();
int compare(char);
void pop();
int main()
{
int k;
char str[40];
cout<<"Enter the string"<<endl;
cin.getline(str,40);
k=strlen(str);
for(int i=0;i<k;i++)
{
if(str[i]=='{'||'('||'[')
push(str[i]);
else if ( str[i]=='}'||')'||']')
{
if(isempty()||compare(str[i]))
pop();
}
}
if(top==-1)
cout<<"Balanced"<<endl;
else cout<<"unbalanced"<<endl;
return 0;
}
void push( char k)
{
top=top+1;
n[top]=k;
}
int isempty()
{
if(top==-1) return 0;
else return 1;
}
int compare( char s)
{
if(s==n[top])
return 1;
else
return 0;
}
void pop()
{
top=top-1;
}
