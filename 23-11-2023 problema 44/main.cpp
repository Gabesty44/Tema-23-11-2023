#include <iostream>

using namespace std;

int main()
{
int a,b,d1,d2,s1=0,s2=0;
cin>>a>>b;
for(d1=2;d1*d1<a;d1++)
    if(a%d1==0)
        s1+=+d1+a/d1;
for(d2=2;d2*d2<b;d2++)
    if(b%d2==0)
        s2+=+d2+b/d2;
if(s1+1==b && s2+1==a)
    cout<<"Cele 2 numere sunt prietene";
else
    cout<<"Cele 2 numere nu sunt prietene";
return 0;
}
