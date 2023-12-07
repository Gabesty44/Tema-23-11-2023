#include <iostream>

using namespace std;

int main()
{
int n,a,i,b;
bool crescatoare=true;
cin>>n>>a;
for(i=2;i<=n;i++)
{
    cin>>b;
    if(a>b)
        crescatoare=false;
    a=b;
}
if(crescatoare)
    cout<<"Cele "<<n<<" numere sunt ordonate crescator";
else
    cout<<"Cele "<<n<<" numere nu sunt ordonate crescator";
return 0;
}
