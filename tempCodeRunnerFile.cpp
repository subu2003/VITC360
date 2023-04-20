#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int f=n,b=n;
    while(true)
    {
        f++;
        b--;
        int f1=0;
        int b1=0;
        for(int i=2;i<=sqrt(f);i++)
        {
            if(f%i==0)f1=1;
            if(b%i==0)b1=1;
        }
        if(f1==0&&b1==0)
        {
            cout<<b;break;
        }
        if(f1==0&&b1!=0){cout<<f;break;}
        if(f1!=0&&b1==0){cout<<b;break;}
    }
}