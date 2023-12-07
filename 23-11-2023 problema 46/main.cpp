#include <iostream>

using namespace std;

int main()
{
int m,n,n1,n2,R,p,k=0,i,l=0;
cin>>n;
n1=n;
n2=n;
while(n1!=0)
{
    k++;
    n1/=10;
}
while(n!=0)
{
    bool estePrim=true;
    R=0;
    m=n;
    p=1;
    while(m!=0)
    {
        R=R+((m%10)*p);
        m/=10;
        p*=10;
    }
    for(i=2;i<=R/2;i++)
    {
        if(R%i==0)
            estePrim=false;
    }
    if(estePrim)
        l++;
    n/=10;
}
if(k==l)
{
    while(n2!=0)
    {
        cout<<n2<<" ";
        n2/=10;
    }
}
else
    cout<<0;
return 0;
}
