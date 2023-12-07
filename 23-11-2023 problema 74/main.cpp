#include <iostream>

using namespace std;

int main()
{
int n,a,i,par1=0,par2,k=0;
cin>>n>>a;
while(a!=0)
{
    if((a%10%2)==0)
        par1++;
    a/=10;
}
for(i=2;i<=n;i++)
{
    cin>>a;
    while(a!=0)
    {
        if((a%10)%2==0)
            par2++;
        a/=10;
    }
    if(par2==par1)
        k++;
    par1=par2;
    par2=0;
}
cout<<k;
return 0;
}
