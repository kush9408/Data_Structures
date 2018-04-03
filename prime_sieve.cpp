

                    // Sieve Erosothenes Method to find the prime number within the given range
#include<iostream>
using namespace std;
#define max 100
int main()
{
int prime[max+1],i;
for(i=0;i<=max;i++)
prime[i]=1;
prime[0]=0;
prime[1]=0;
for(int k=2;k*k<=max;k++)
{
if(prime[k]==1)
{
for(int j=2;j*k<=max;j++)
{
prime[j*k]=0;
}
}
}
cout<<"The prime number upto "<<max<<"are ......"<<endl;
i=0;
while(i<max)
{
if(prime[i])
{
cout<<i<<",";
}
i++;
}
return 0;
}
