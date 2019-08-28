#include <iostream>
using namespace std;

int expo(int base,int exp){
    int result = 1;
    while(exp){
        if(exp%2){
            result *= base;
        }
        base *= base;
        exp /= 2;
    }
    return result;
}

int main() {
    int base,exp;
    cin>>base>>exp;
    cout<<expo(base,exp)<<endl;
}
