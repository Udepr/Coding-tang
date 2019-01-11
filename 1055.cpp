#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    long n,i,s=0;
    double k=0,a[256];

    cin>>n;

    for(i=1;i<=n;i++)
    {   
        cin>>a[i];
        k=k+a[i];
    }

    k/=n; 
    k=(int)(k*10+0.5)/10.0;

    for(i=1;i<=n;i++)
        if(a[i]>=k)
            s++;

    cout<<s;
}
