#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    long n,w,j=0,o=0;

    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>w;

        if(w%2==1)
            j++;
        else
            o++;
    }   

    cout<<"jishu:"<<j<<"\n"<<"oushu:"<<o;
}
