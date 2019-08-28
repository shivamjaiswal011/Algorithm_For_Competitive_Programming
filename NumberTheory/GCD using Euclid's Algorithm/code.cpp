#include <bits/stdc++.h>
using namespace std;

int GCD(int a,int b){
    if(a%b){
        return GCD(b,a%b);
    }
    else{
        return b;
    }
}
int main() {
    int a,b;
    cin>>a>>b;
    int gcd;
    if(a>b){
        gcd = GCD(a,b);
    }
    else{
        gcd = GCD(b,a);
    }
    cout<<gcd<<endl;
}
