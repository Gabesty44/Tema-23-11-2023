#include <iostream>

using namespace std;

int main()
{
int n,d,k=0;
cin>>n;
for(d=1;d*d<n;d++)
    if(n%d==0)
    {
        cout<<d<<" "<<n/d<<" ";
        k++;
    }
cout<<endl;
if(d*d==n)
    cout<<d<<" "<<endl;
if(k*2==2)
    cout<<"Numarul este prim";
else
    cout<<"Numarul nu este prim";
return 0;
}
