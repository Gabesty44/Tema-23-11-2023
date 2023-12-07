#include <iostream>

using namespace std;

int main()
{
int a,b,i,j,k,i1;
cin>>a>>b;
for(i=a;i<=b;i++)
{
    i1=i;
    k=0;
    while(i1!=0)
    {
        if((i1%10)%2==0)
            k++;
        i1/=10;
    }
    if(k>0)
        cout<<i<<" ";
}
return 0;
}
