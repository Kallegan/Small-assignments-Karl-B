#include <iostream>

using namespace std;


int main()
{
	int number, reversedNumber = 0;

	cout << " Please enter a number: ";
	cin >> number;
	cout << "Your number in reversed and seperated order is: ";

	while (number != 0)
	{
		reversedNumber *= 10;
		int lastDigit = number % 10; //modulate number by 10 to get last digit.		
		reversedNumber += lastDigit;
		cout << " " << lastDigit;
		number /= 10; // devide by 10 to remove last number.
		if (number != 0) //added if statment to avoid getting comma after last digit.
		{
			cout << ",";
		}
	}

	return 0;
}