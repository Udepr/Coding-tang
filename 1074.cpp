#include<iostream>
#include<cstdio>

using namespace std;

double function(double x)
{
    double y;

    if(x<=-2)
        y=x*3+4.5;

    else if(x>-2&&x<=2) 
        y=x*x+1;

    else if(x>2&&x<=15) 
        y=x/3+x/5;

    else if(x>15)   
        y=x/2+6.5;

    return y;
}

int main()
{
    double x;
    cin>>x;
    x=function(x);

    printf("%.3f",x);
}
