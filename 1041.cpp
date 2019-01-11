#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    long w,s1=0,s2=0,s3=0,s4=0;

    for(true;true;true)
    {
        cin>>w;

        if(w==0)
            break;

        if(w>0)
        {
            s1++;
            s3+=w;          
        }

        if(w<0)
        {
            s2++;
            s4+=w;
        }
    }

    cout<<s1<<"\n"<<s2<<"\n"<<s3<<"\n"<<s4;
}
