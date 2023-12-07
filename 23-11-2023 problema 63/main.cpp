#include <iostream>

using namespace std;

int main()
{
int a,b,i,i1,ok,s,j,k=0;
cin>>a>>b;
for(i=a;i<=b;i++)
{
    s=0;
    ok=1;
    i1=i;
    while(i1!=0)
    {
        s+=i1%10;
        i1/=10;
    }
    for(j=2;j<=s/2;j++)
        if(s%j==0)
            ok=0;
    if(ok==1 && s!=1)
        cout<<i<<" ";
        k++;
}
if(k==0)
    cout<<"Nu exista astfel de numere in intervalul dat";
return 0;
}
