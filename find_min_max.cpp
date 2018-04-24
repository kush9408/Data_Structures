#include<iostream>
using namespace std;
struct node 
{
int data;
node *left;
node *right;
};
node* getnewnode(int k)
{
node* temp=new node();
temp->data=k;
temp->left=temp->right=NULL;
return temp;
}
node* insert(node* root,int data)
{
if(root==NULL) root=getnewnode(data);
else if(data<=root->data) root->left=insert(root->left,data);
else if(data>=root->data) root->right=insert(root->right,data);
return root;
}
int findmin(node* root)
{
node* temp=root;
if(temp==NULL) {cout<<"..... TREE IS EMPTY ....."<<endl; return -1; }
while(temp->left!=NULL)
temp=temp->left;
return temp->data;
}
int search(node* root,int data)
{
if(root==NULL) return 0;
else if(data==root->data) return 1;
else if(data<=root->data) return search(root->left,data);
else return search(root->right,data);
}
int findmax(node* root)
{
node* temp=root;
if(temp==NULL) cout<<"empty tree"<<endl;
while(temp->right!=NULL)
{
temp=temp->right;
}
return temp->data;
}
int main()
{
int min,max;
node* root=NULL;
root=insert(root,6);
root=insert(root,4);
root=insert(root,8);
root=insert(root,2);
root=insert(root,5);
root=insert(root,7);
root=insert(root,9);
if(search(root,6)==1) cout<<endl<<"........ Element found ........"<<endl;
else cout<<"Element not found"<<endl;

cout<<".......... SEARCHING FOR MINIMUM ELEMENT IN THE SERIES .........."<<endl;

min=findmin(root);
cout<<min<<endl;

cout<<".......... NOW SEARCHING FOR THE MAXIMUM ELEMENT IN THE SERIES .........."<<endl;

max=findmax(root);
cout<<max<<endl;


return 0;
}
