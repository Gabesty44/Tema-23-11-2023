#include <iostream>

using namespace std;

int main()
{
int a,b,c;
cin>>a>>b>>c;
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
cout<<"Cel mai mare divizor comun este "<<a;
return 0;
}
