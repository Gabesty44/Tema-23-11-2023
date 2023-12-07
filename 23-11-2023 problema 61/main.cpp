#include <iostream>

using namespace std;

int main()
{
int a,b,i,k,i1,l=0;
cin>>a>>b;
for(i=a;i<=b;i++)
{
    i1=i;
    k=0;
    while(i1!=0)
    {
        if(i1%10==0)
            k++;
        i1/=10;
    }
    if(k>1)
    {
        cout<<i<<" ";
        l++;
    }
}
if(l==0)
    cout<<"Nu exista astfel de numere in intervalul dat";
return 0;
}
