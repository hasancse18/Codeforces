#include<bits/stdc++.h>
using namespace std;

int findx()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
        if(m>=n)
        {
            if(b<=n*a)
                return b;
            else
            {
                return n*a;
            }
        }

     int p=n*a;
     //cout<<p<<endl;
      int m1=n/m;
      n=n%m;
      int s=m1+1;
      s=s*b;
      //cout<<s<<endl;
       s=min(s,p);
    int q=((n*a)+(m1*b));

        //cout<<q<<endl;
    int x=min(s,q);
    return x;
}
int main()
{
    int x= findx();
    cout<<x<<endl;
}
