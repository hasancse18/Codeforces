#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,m=0;
    cin>>n>>l;
    int i,a[n],b[n-1];
    //vector<int>v;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    for(i=0;i<n-1;i++)
    {
       if(a[i+1]-a[i]>m){
        m=a[i+1]-a[i];
       }
    }
    double x =(double)m/2;
    //cout<<x<<endl;
    double y = a[0];
    double m1= max(x,y);
    //cout<<m1<<endl;
    double z= l-a[n-1];
    double p=max(m1,z);
    cout<<fixed<<setprecision(10)<<p<<endl;
}
