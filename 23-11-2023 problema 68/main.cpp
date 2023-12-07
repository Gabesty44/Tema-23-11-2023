#include <iostream>

using namespace std;

int main()
{
int n,i,a,d,s,max=0;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>a;
    s=0;
    for(d=1;d*d<a;d++)
        if(a%d==0)
            s+=2;
    if(d*d==a)
        s++;
    if(s>=max)
        max=a;
}
cout<<max;
return 0;
}
