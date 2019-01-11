#include<iostream>
#include<cstdio>
#include<cstring>


using namespace std;

int main()
{
    char s[65536];
    long i,s1=0,s2=0;

    gets(s);
    //puts(s);

    for(i=0;i<=strlen(s);i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            s1++;

        if(s[i]>='a' && s[i]<='z')
            s2++;   
    }

    cout<<s1<<' '<<s2;
    //cout<<' '<<strlen(s);
}
