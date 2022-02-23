#include <iostream>

using namespace std;

void swap(int items[], size_t lenght) //add & to operate on the actual virable.
{
	for (size_t i = 0; i < lenght; i++)
	{
		cout << *items++ << "" <<endl; 
	}	
}

int main()
{	
	int numbers[]{1,2,3,4,5};

	int* ptr = numbers;

	cout << "Size in main: " << sizeof(numbers) << endl;

	swap(numbers, size(numbers));

	return 0;
}