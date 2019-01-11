#include<iostream>
#include<cstdio>
#include<cstring>

int main()
{
    char s[128];

    gets(s);

    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
        {   
            if(s[i]=='z')
            {
                s[i]='a';
                continue;
            }

            if(s[i]=='Z')
            {
                s[i]='A';
                continue;
            }

            s[i]++;
        }
    }

    puts(s);
}
