#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int j=0;j<n;j++)
    {

        int m,i,k;
        cin>>m;
        vector<int>v,ans;

        while(m>0)
        {
            k=(int)m%10;
            m=m/10;
            v.push_back(k);
        }
        //reverse(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
           long int x=v[i] * pow(10,i);
           if(x>0){
                ans.push_back(x);}
           //cout<<x<<" ";
        }
        cout<<ans.size()<<endl;
        for(i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;

    }
}
