#include <iostream>

using namespace std;

int main()
{
int n,a,i,s1=0,p=1,u;
float Ma,s=0,k=0;
cin>>n;
for(i=1;i<=n;i++)
{
    cin>>a;
    s1+=a;
    k++;
    if(a%2==0)
        s+=a;
    else
        p*=a;
}
u=p%10;
Ma=s1/k;
cout<<"Suma valorilor pare este "<<s<<endl
<<"Ultima cifra a produsului valorilor impare este "<<u<<endl
<<"Media aritmetica a numerelor este "<<Ma;
return 0;
}
