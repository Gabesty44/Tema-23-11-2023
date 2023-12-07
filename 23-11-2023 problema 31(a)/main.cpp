#include <iostream>

using namespace std;

int main()
{
int x,y,k=0;
cin>>x>>y;
while(x!=y)
{
    if(x>y)
        x-=y;
    else
        y-=x;
}
cout<<"Cel mai mare divizor comun este "<<x<<endl;
if(x==1)
    cout<<"Cele 2 numere sunt prime intre ele";
else
    cout<<"Cele 2 numere nu sunt prime intre ele";
return 0;
}
