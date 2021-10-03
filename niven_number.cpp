// C++ program to check if a number is Niven
// Number or not.
#include <bits/stdc++.h>
using namespace std;

// function to check Niven Number
bool checkNiven(int n)
{
	// calculate sum of digits
	int sum = 0;
	for (int temp = n; temp > 0; temp /= 10)
		sum += temp % 10;

	// Return true if sum of digits is multiple
	// of n
	return (n % sum == 0);
}

// driver program to check above function
int main()
{   int n;
    cout<<"enter a integer number :";
    cin>>n;
	checkNiven(n) ? cout << "Yes,it's a niven number'\n" : cout << "No , it is not a niven number\n";
	return 0;
}
