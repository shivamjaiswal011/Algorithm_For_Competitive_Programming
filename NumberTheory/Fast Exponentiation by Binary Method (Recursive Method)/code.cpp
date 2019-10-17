#include <bits/stdc++.h>
using namespace std;

int expo(int base,int exp)
{
    if (exp == 0)
        return 1;
    if (exp == 1)
        return base;
    double t = expo(base, exp/2);
    return t * t * pow(base, exp%2);
}

int main()
{
    int base,exp;
    cin>>base>>exp;
    cout <<expo(base,exp)<< endl;
    return 0;
}
