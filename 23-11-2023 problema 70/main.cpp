#include <iostream>

using namespace std;

int main()
{
int n,a,b,i;
bool ok=true;
cin>>n>>a;
for(i=2;i<=n;i++)
{
    cin>>b;
    if(b!=a)
        ok=false;
    a=b;
}
if(ok)
    cout<<"Cele "<<n<<" numere au aceeasi valoare";
else
    cout<<"Cele "<<n<<" numere nu au aceeasi valoare";
return 0;
}
