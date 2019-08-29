//Fast Prime O(sqrt(n))
// Code is also available on https://ide.codingblocks.com/s/123217

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<=1)
        return false;
    if(n==2)
        return true;
    if(n%2==0)
        return false;
    int rt = sqrt(n);
    for(int i=3;i<rt;i+=2){
        if(n%i==0)
            return false;
    }
    return true;
}
int main() {
    int n;
    cin>>n;
    if(isPrime(n))
        cout<<"Prime";
    else
        cout<<"Not Prime";
}
