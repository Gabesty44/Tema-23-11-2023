#include <iostream>

using namespace std;

int main()
{
int n,a,i,s1=0,s2=0,k=0;
cin>>n>>a;
while(a!=0)
{
    s1+=a%10;
    a/=10;
}
for(i=2;i<=n;i++)
{
    cin>>a;
    while(a!=0)
    {
        s2+=a%10;
        a/=10;
    }
    if(s2==s1)
        k++;
    s1=s2;
    s2=0;
}
cout<<k;
return 0;
}
