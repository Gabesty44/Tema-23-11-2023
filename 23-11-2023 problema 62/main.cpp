#include <iostream>

using namespace std;

int main()
{
int a,b,i,x,ok,i1,j,k;
cin>>a>>b>>x;
for(i=a;i<=b;i++)
{
    k=0;
    i1=i;
    ok=1;
    for(j=2;j<=i/2;j++)
        if(i%j==0)
            ok=0;
    if(ok==1)
    {
        while(i1!=0)
        {
            if(i1%10==x)
                k++;
            i1/=10;
        }
    }
    if(k>0)
        cout<<i<<" ";
}
return 0;
}
