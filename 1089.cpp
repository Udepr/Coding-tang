#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    char s[256],x,k;

    gets(s);
    cin>>x>>k;

    for(int i=0;i<strlen(s);i++)
        if(s[i]==x)
            s[i]=k;

    puts(s);
}
