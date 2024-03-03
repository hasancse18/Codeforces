#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    int i,j,f=0,k=0;
    cin>>n>>c;
    for(i=0;i<n;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i%2==0)
            {
                cout<<"#";
            }
            else{
                if((i+1)%4==0 && j==0){
                    cout<<"#";
                    k=1;
                    }
                else if(j==c-1 && k!=1)
                    cout<<"#";
                else
                    cout<<".";
            }

        }
        cout<<endl;
        k=0;
    }
}
