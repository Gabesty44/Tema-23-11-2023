#include <iostream>

using namespace std;

int main()
{
int n,p,d=2,s=0;
cin>>n;
while(n>1)
{
p=0;
while(n%d==0)
{
    p++;
    n/=d;
}
if(p)
    s+=p;
d++;
}
cout<<s;
return 0;
}

