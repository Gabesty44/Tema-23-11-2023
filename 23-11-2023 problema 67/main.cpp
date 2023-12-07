#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int n,a,i,j,ok,prime=0,k,l,m,putere3=0,a1,ok2,primInvers=0,ogl,a2;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>a;
    a1=a2=a;
    ok=ok2=1;
    ogl=0;
    for(j=2;j<=a/2;j++)
        if(a%j==0)
            ok=0;
    if(ok==1)
        prime++;
    while(a2%3==0)
        a2/=3;
    if(a2==1)
        putere3++;
    while(a1!=0)
    {
        ogl=10*ogl+a1%10;
        a1/=10;
    }
    for(m=2;m<=a/2;m++)
        if(a%m==0)
            ok2=0;
    if(ok2==1)
        primInvers++;
}
cout<<"Sunt "<<prime<<" numere prime"<<endl
<<"Sunt "<<putere3<<" numere ce reprezinta o putere a lui 3"<<endl
<<"Sunt "<<primInvers<<" numere a caror invers este prim"<<endl;
return 0;
}
