// C++ program to demonstrate
// Function Derived Type
/*   function is a block of code or program-segment that is defined to perform a specific well-defined task. A function is generally defined to save the user from writing the same lines of code again and again for the same input. All the lines of code are put together inside a single function and this can be called anywhere required. main() is a default function that is defined in every program of C++.    */

#include <iostream>
using namespace std;

// max here is a function derived type
int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

// main is the default function derived type
int main()
{
	int a = 10, b = 20;

	// Calling above function to
	// find max of 'a' and 'b'
	int m = max(a, b);

	cout << "m is " << m;
	return 0;
}
