#include <iostream>

using namespace std;

int main()
{
int n,d,k=0;
cin>>n;
for(d=2;d*d<n;d++)
    if(n%d==0)
    {
        cout<<d<<" "<<n/d<<" ";
        k++;
    }
if(d*d==n)
    cout<<d<<" ";
if(k==0)
    cout<<"Numarul este prim";
return 0;
}
