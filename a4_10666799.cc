//A C++ program to determine the GCD of two numbers

#include <iostream>
using namespace std;

//Function declaration
int gcd(int num1, int num2)

{
	if (num2 <= num1 && num1 % num2 == 0)
	return num2;

	else if (num2 == 0)
	return 1;

	else 
	return gcd(num2, num1 % num2);

}

int main()
{
	int num1, num2;
	cout << "Enter two positive numbers. \nThe largest number first then the lowest number: ";
	cin >> num1 >> num2;

	cout << "The GCD of " << num1 << " & " << num2 << " = " << gcd(num1,num2);
}
