#include <iostream>

using namespace std;

int main()
{
int n,a,i,min=9999,max=0,k,maxPar=0,maxSuma=0,s,a1;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>a;
    a1=a;
    s=0;
    if(a<min)
        min=a;
    if(a>=max)
    {
        max=a;
        k=1;
    }
    else
        if(a==max)
            k++;
    if(a%2==0 && a>=maxPar)
        maxPar=a;
    while(a!=0)
    {
        s+=a%10;
        a/=10;
    }
    if(s>maxSuma)
        maxSuma=a1;
}

cout<<"Valoarea minima este "<<min<<endl
<<"Valoarea maxima este "<<max<<" si apare de "<<k<<" ori"<<endl
<<"Cel mai mare numar par este "<<maxPar<<endl
<<"Valoarea cu cea mai mare suma a cifrelor est "<<maxSuma;
return 0;
}
