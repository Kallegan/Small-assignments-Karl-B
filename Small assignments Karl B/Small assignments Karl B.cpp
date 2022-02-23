#include <iostream>

using namespace std;

string arithmeticProgression(int arr[], int arrSize) {

	int diff_arith = 0;
	bool arith_flag = true;

	diff_arith = arr[1] - arr[0];	

	for (int y = 0; y < arrSize - 1 && arith_flag; y++)
	{
		arith_flag = false;

		if (arr[y] + diff_arith == arr[y + 1])
		{
			arith_flag = true;
		}
	}	
	if (arith_flag)
	{
		return "Series has arithmetic progression.";
	}
	else
	{
		return "Series doesn't have arithmetic progression.";
	}
}

int main()
{   
	int arr[4] = {};
	int arrSize = *(&arr + 1) - arr;	

	cout << "Enter 4 numbers to check if they are in a arithmetic progression: " << endl;	
	
	for (int i = 0; i < arrSize; i++)
	{
		cout << "Please enter number " << i + 1 << " : ";
		cin >> arr[i];			
	}		

	cout << arithmeticProgression(arr, arrSize);

	return 0;
}



