#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {

        int a,b;
        int s=0;
        cin>>a>>b;
        int x=abs(a-b);
        //a=x%10;
        s=x/10;
        if(x%10!=0)
        {
            s+=1;
        }
        cout<<s<<endl;
    }
}
