#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x=0;
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        if(ar[i]+k<6)
          x++;
    }
    cout<<x/3<<endl;
}
