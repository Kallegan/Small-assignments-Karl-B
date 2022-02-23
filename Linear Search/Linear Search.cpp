#include <iostream>

using namespace std;

int main()
{
	int arr[10] = { 5,3,6,3,1,5,3,8,10,1 };
	int arrSize = *(&arr + 1) - arr;
	int userInput = 0;

	cout << "Input a number to search for in the array: ";
	cin >> userInput;

	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] == userInput)
		{
			cout << "The number " << userInput << " was located at position " << i << "." << endl;
		}
	}

	return 0;
}



