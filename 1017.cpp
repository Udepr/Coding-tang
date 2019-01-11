#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    long n,k,i,s=0,w;

    cin>>n>>k;

    for(i=1;i<=n;i++)
    {
        cin>>w;

        if(w==k)
            s++;
    }

    cout<<s;
}
