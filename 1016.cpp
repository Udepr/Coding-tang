#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    long i,m,n,s=0; 

    cin>>m>>n;

    for(i=m;i<=n;i++)       
        if(i%13==0)
            s+=i;

    cout<<s;
}
