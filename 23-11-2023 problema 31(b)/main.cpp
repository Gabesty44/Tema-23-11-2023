#include <iostream>

using namespace std;

int main()
{
int x,y,r;
cin>>x>>y;
while(y!=0)
{
    r=x%y;
    x=y;
    y=r;
}
cout<<"Cel mai mare divizor comun este "<<x<<endl;
if(x==1)
    cout<<"Cele 2 numere sunt prime intre ele";
else
    cout<<"Cele 2 numere nu sunt prime intre ele";
return 0;
}
