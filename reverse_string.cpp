#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void reverse(char a[51],int);
int main()
{
char str[51];
int l;
cout<<"enter the  string"<<endl;
cin.getline(str,51);
l=strlen(str);
reverse(str,l);
return 0;
}
void reverse(char p[51],int k)
{
for(int i=k;i>=0;i--)
{
cout<<p[i]<<"";
}
cout<<endl;
}
