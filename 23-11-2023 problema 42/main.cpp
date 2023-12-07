#include <iostream>

using namespace std;

int main()
{
int n,d,k=0;
cin>>n;
for(d=2;d*d<n;d++)
    if(n%d==0)
        k++;
if(k==0)
    cout<<"Numarul nu are niciun divizor propriu si este prim";
else
    cout<<"Numarul are "<<k*2<<" divizori proprii si nu este prim";
return 0;
}
