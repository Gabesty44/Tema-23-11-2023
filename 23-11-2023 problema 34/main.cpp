#include <iostream>

using namespace std;

int main()
{
int a,a1,b1,b,c,c1;
cin>>a>>b>>c;
a1=a;
b1=b;
c1=c;
while(a!=b)
{
    if(a>b)
        a-=b;
    else
        b-=a;
}
while(a!=c)
{
    if(a>c)
        a-=c;
    else
        c-=a;
}
cout<<"Cel mai mic multiplu comun este "<<(a1*b1*c1)/c;
return 0;
}
