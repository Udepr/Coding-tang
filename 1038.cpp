#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    long i,n,s=0,b,t,a;

    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(i % 5==0)
            s+=i;


        else
        {
            b=0;
            t=i;

            while(t!=0)
            {
                a=t%10;
                if(a==5)
                {
                    b=1;
                    break;
                }
                t/=10;
            }

            if(b==1)
                s+=i;   
        }   
    }

    cout<<s;
}
