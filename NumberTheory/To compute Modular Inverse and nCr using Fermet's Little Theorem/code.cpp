//To compute Modular Inverse and Computation of nCr by Fermet's Little Theorem
#include <iostream>
#define MOD 1000000007
using namespace std;

long long int expo(long long int base,long long int p)
{
    if (p == 0)
        return 1;
    if (p == 1)
        return base;
    long long int result = expo(base, p/2);
    result %= MOD;
    result *= result;
    result %= MOD;
    if (p % 2 == 0)
        return result;
    else
        return (base%MOD * result)%MOD;
}

long long int modInverse(long long int n) 
{ 
    return expo(n,MOD-2); 
} 

long long int nCr(long long int n,long long int r) 
{ 
   // Base case 
   if (r==0) 
      return 1; 
  
    // Fill factorial array so that we can find all factorial of r, n and n-r 
    int fac[n+1]; 
    fac[0] = 1; 
    for (int i=1 ; i<=n; i++){ 
        fac[i] = fac[i-1]*(i%MOD);
        fac[i] %= MOD;
    }
    return (fac[n]*modInverse(fac[r])%MOD * modInverse(fac[n-r]))%MOD; 
} 

int main() {
    long long int n,r;
    cin>>n>>r;
    cout<<nCr(n,r)<<endl;
    return 0;
}
