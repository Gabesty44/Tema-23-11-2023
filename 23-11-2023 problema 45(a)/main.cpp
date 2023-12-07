#include <iostream>

using namespace std;

int main()
{
long long int n,d,s=0;
cin>>n;
for(d=1;d*d<n;d++)
    if(n%d==0)
        s+=d+n/d;
if(s-n==n)
    cout<<"Numarul este perfect";
else
    cout<<"NU";
return 0;
}
