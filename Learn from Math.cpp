#include<bits/stdc++.h>
using namespace std;


bool checkprime(int num)
{
    if(num <= 1) {
    return false;
    }
    for(int i = 2; i <= sqrt(num); i++) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

vector<int> check(int num)
{
    vector<int>v(2);
    if(num%2==0)
    {
        num=num/2;
        if(!checkprime(num))
        {
            v[0]=num;
            v[1]=num;
        }
        else
        {
            v[0]=num-1;
            v[1]=num+1;
        }

    }
    else
    {
        int x=num/2;
        int y=x+1;
        while(1)
        {


            if(!checkprime(x) && !checkprime(y))
            {
                v[0]=x;
                v[1]=y;
                return v;
            }
            x--;
            y++;
        }
    }
    return v;
}




int main()
{
    vector<int>v(2);
    int t;
    cin>>t;
    v=check(t);
    for(int i=0;i<2;i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
