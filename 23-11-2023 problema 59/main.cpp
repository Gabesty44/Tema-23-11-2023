#include <iostream>

using namespace std;

int main()
{
int a,b,i,j,k,i1,l,r;
cin>>a>>b;
for(i=a;i<=b;i++)
{
    i1=i;
    k=l=0;
    while(i1!=0)
    {
        if(i1%2==0)
            k++;
        else
            l++;
        i1/=2;
    }
    if(k==l)
        cout<<i<<" ";
}
return 0;
}
