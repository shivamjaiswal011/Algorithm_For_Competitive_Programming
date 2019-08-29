// C++ program to find multiplicative modulo inverse using
// Extended Euclid algorithm.
#include<iostream>
using namespace std;

// C++ function for extended Euclidean Algorithm
int gcdExtended(int a, int b, int &x, int &y);

// Function to find modulo inverse of a
int modInverse(int a, int m)
{
	int x, y;
	int g = gcdExtended(a, m, x, y);
	if (g != 1)
		cout << "Inverse doesn't exist";
	else
	{
		// m is added to handle negative x
		int res = (x%m + m) % m;
        return res;
	}
}

// C function for extended Euclidean Algorithm
int gcdExtended(int a, int b, int &x, int &y)
{
	// Base Case
	if (a == 0)
	{
		x = 0, y = 1;
		return b;
	}

	int x1, y1; // To store results of recursive call
	int gcd = gcdExtended(b%a, a, x1, y1);

	// Update x and y using results of recursive
	// call
	x = y1 - (b/a) * x1;
	y = x1;

	return gcd;
}

// Driver Program
int main()
{
    int a,b,m;
    cin>>a>>b>>m; // We have to calculate (a/b)%m
    // (a/b)%m = (a*(modInverse(b)))%m = ((a%m)*(modInverse(b)%m)%m
	int inverseB = modInverse(b, m);
    int mod = ((a%m)*(inverseB%m))%m;
    cout<<mod;
	return 0;
}
