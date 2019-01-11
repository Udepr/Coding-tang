#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    long i,a,b,s;

    for(i=1000;i<=9999;i++)
    {
        a=i/100;
        b=i%100;

        s=(a+b)*(a+b);

        if(s==i)
            cout<<i<<endl;
    }
}
