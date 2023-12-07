#include <iostream>

using namespace std;

int main()
{
int a,b,ogl,i,i1;
cin>>a>>b;
for(i=a;i<=b;i++)
{
    ogl=0;
    i1=i;
    while(i1!=0)
    {
        ogl=ogl*10+(i1%10);
        i1/=10;
    }
    if(i==ogl)
        cout<<i<<" ";
}
return 0;
}
