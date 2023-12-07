#include <iostream>

using namespace std;

int main()
{
int n,d,k=0,s,l=0,ok,i,ogl,m=0,a,j,a1;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>a;
    a1=a;
    ogl=0;
    s=0;
    ok=1;
    for(d=1;d*d<a;d++)
        if(a%d==0)
            s+=d+a/d;
    if(s-a==a)
        k++;
    for(j=2;j<=a/2;j++)
        if(a%j==0)
            ok=0;
    if(ok==1)
        l++;
    while(a1!=0)
    {
        ogl=10*ogl+a1%10;
        a1/=10;
    }
    if(ogl==a)
        m++;
}
cout<<"Sunt "<<k<<" numere perfecte"<<endl
<<"Sunt "<<l<<" numere prime"<<endl
<<"Sunt "<<m<<" numere palindrom"<<endl;
return 0;
}
