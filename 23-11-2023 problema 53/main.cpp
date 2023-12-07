#include <iostream>
#include <math.h>
using namespace std;

int main()
{
int a,b,i,k=0;
cin>>a>>b;
for(i=a;i<=b;i++)
    if(sqrt(i)==int(sqrt(i)))
    {
        cout<<i<<" ";
        k++;
    }
if(k==0)
    cout<<"Nu exista astfel de numere in intervalul dat";
return 0;
}
