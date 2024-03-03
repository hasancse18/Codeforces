#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,a;
    float b;
    int x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(a==2||a==1){
            cout<<"0"<<endl;
        }

        else{

            x=a/2;
            b=(float)a/2;
            //cout<<b<<endl;
            //cout<<x<<endl;
            if(b>x){
                cout<<x<<endl;

            }
            else
                cout<<x-1<<endl;
        }
    }
}
