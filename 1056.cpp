#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    float a[16];

    cin>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]>>a[7]>>a[8]>>a[9]>>a[10];

    a[0]=a[1]*2.5+a[2]*2.7+a[3]*3.2+a[4]*3.8+a[5]*2.4+a[6]*15.0+a[7]*12.5+a[8]*13.6+a[9]*16.8+a[10]*22.5;
    a[0]=(int)(a[0]*100+0.5)/100.0;

    cout<<a[0];
}
