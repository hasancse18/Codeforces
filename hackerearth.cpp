#include <bits/stdc++.h>
using namespace std;
int main() {
	
		map<int,int>mp,mp1;
		int n,x;
        cin>>n;
        int maxi=0,mini=0;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			mp[x]++;
		}
		for(auto it:mp)
		{
			int y=it.second;
            maxi=max(maxi,y);
            mini=min(mini,y);
			mp1[y]+=it.first;
		}
		for(auto it:mp1)
        {
            mp1[it.first]=it.second*it.first;
        }
        int s=0;
		for(auto it: mp1)
		{
			s+=it.second;
			mp1[it.first]=s;
		}

        int q;
	cin>>q;
	int l,r;
	for(int i=0;i<q;i++)
	{
		cin>>l>>r;
        if(l>maxi)
        {
            cout<<0<<'\n';
        }
		else if(r>maxi)
		{
			cout<<mp1[maxi]-mp1[l-1]<<'\n';
		}
		else
		{
			cout<<mp1[maxi]-mp1[l-1]<<endl;
		}


	}
	
}