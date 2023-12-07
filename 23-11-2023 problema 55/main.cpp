#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int a,b,i,j,k=0;
cin>>a>>b;
if(a<=1)
    cout<<1<<" ";
for(i=a;i<=b;i++)
{
    for(j=1;j<=i;j++)
        if(i==pow(2,j))
        {
            cout<<i<<" ";
            k++;
        }
}
if(k==0)
    cout<<"Nu exista astfel de numere in intervalul dat";
return 0;
}
