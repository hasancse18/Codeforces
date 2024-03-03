#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,l,f=0;
    cin>>s>>l;
    pair<int,int>p[1000];
    int i;
    for(i=0;i<l;i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    sort(p,p+l);
    for(i=0;i<l;i++)
    {
        //cout<<p[i].first<<" "<<p[i].second<<endl;
        if(s<=p[i].first){
            f=1;
            break;
        }
        else{
            s+=p[i].second;
        }
    }
    if(f==1){
        cout<<"NO"<<endl;
    }
    else
        cout<<"YES"<<endl;
}
