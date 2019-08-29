// C++ program to demonstrate working of extended
// Euclidean Algorithm
#include <iostream>
using namespace std;

// C function for extended Euclidean Algorithm
int gcdExtended(int a, int b, int &x, int &y)
{
	// Base Case
	if (a == 0)
	{
		x = 0;
		y = 1;
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
    int a,b,x,y;
    cin>>a>>b;
	int gcd = gcdExtended(a, b, x, y);
    cout<<gcd;
	return 0;
}
