#include<bits/stdc++.h>
using namespace std;
long long getPrime(long long n)
{
    while (n % 2 == 0)
    {
        return 2;
        //n = n/2;
    }
    for (long long i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            return i;
           // n = n/i;
        }
    }
    if (n > 2)
        return n;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        if(b<=3)
        {
            cout<<-1<<endl;
        }
        else if(a==b)
        {
           long long prime = getPrime(a);
                if(prime == a)
                    cout<<-1<<endl;
                else
                    cout<<prime<<" "<<a-prime<<endl;
        }
        else
        {
            b=b/2;
            cout<<b<<" "<<b<<endl;

        }

    }
}