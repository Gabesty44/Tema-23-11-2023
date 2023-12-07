#include <iostream>

using namespace std;

int main()
{
int a,b,c,i,k=0;
cin>>a>>b;
for(i=2;i<=a;i++)
{
    cin>>c;
    if(b!=c)
        k++;
    b=c;
}
if(a==k+1)
    cout<<"DA";
else
    cout<<"NU";
return 0;
}
