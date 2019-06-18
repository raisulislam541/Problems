#include<bits/stdc++.h>
using namespace std;

void sieve(int n,int p)
{
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    for(p=2;p<=n;p++)
    {
        if(prime[p]==true)
        {
            for(int i=p*p;i<=n;i=i+p)
            {
                prime[i]=false;
            }
        }
    }
    for(p=2;p<=n;p++)
    {
        if(prime[p])
        {
            cout<<p<<"\n";
        }
    }


}




int main()
{
 int p,n;
 cout<<"enter your upper value and lower value for prime numbers:";
 cin>>p>>n;
 cout<<"following are the prime numbers less than "
 <<"or equal to n:\n";
 sieve(p,n);
}
