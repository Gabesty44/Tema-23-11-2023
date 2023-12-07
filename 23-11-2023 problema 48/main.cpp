#include <iostream>

using namespace std;

int main()
{
int n,i,k=0;
cin>>n;
while(n!=0)
{
    bool estePrim=true;
    if(n%10==1 || n%10==0)
        estePrim=false;
    for(i=2;i<=(n%10)/2;i++)
        if((n%10)%i==0)
            estePrim=false;
    if(estePrim==true)
        k++;
    n/=10;
}
cout<<k;
return 0;
}
