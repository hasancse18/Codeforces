#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,rem,t=0;
    cin>>n;
    int ar[]={100,20,10,5,1};
    for(int i=0;i<5;i++)
    {
        rem=n%ar[i];
        t+=n/ar[i];
        n=rem;
        //cout<<t<<endl;
    }
    cout<<t<<endl;

}
