#include <iostream>

using namespace std;

int main()
{
int a,a1,b1,b;
cin>>a>>b;
a1=a;
b1=b;
while(a!=b)
{
    if(a>b)
        a-=b;
    else
        b-=a;
}
cout<<"Cel mai mic multiplu comun este "<<(a1*b1)/a;
return 0;
}
