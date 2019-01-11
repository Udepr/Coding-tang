#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    long n,i,a,q,w,e,s=0;

    cin>>n;
    q=w=e=0;

    for(i=1;i<=n;i++)
    {
        cin>>a;
        q=q+a*3;
        cin>>a;
        w=w+a*2;
        cin>>a;
        e=e+a;
    }
    s=q+w+e;

    cout<<q/3<<" "<<w/2<<" "<<e<<" "<<s;
}
