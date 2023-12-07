#include <iostream>

using namespace std;

int main()
{
int n,d,s=0;
cin>>n;
for(d=1;d*d<n;d++)
    if(n%d==0)
        s+=d+n/d;
if(s==n+1)
    cout<<"Suma divizorilor este "<<s<<", iar numarul este prim";
else
    cout<<"Suma divizorilor este "<<s<<", iar numarul  nu este prim";
return 0;
}
