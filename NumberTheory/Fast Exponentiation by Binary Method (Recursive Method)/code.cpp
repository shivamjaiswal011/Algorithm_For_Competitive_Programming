#include <bits/stdc++.h>
using namespace std;

int expo(int base,int exp)
{
    if (exp == 0)
        return 1;
    if (exp == 1)
        return base;

    int result = expo(base, exp/2);
    result *= result;

    // if exponent is even value
    if (exp % 2 == 0)
        return result;

    // if exponent is odd value
    else
        return (base * result);
}

int main()
{
    int base,exp;
    cin>>base>>exp;
    cout <<expo(base,exp)<< endl;
    return 0;
}
