#include <iostream>

using namespace std;


string palindrome(string userInput)
{
	bool flagPalindrome = true;
	unsigned int sizeOfInput = userInput.length();

	for (size_t i = 0; i < userInput.length() && flagPalindrome; i++)
	{
		sizeOfInput--;
		if (userInput[i] == userInput[sizeOfInput])
		{
			flagPalindrome = true;

		}
		else
		{
			flagPalindrome = false;
			break;
		}
	}
	if (flagPalindrome)
	{
		return "the word " + userInput + " is a palindrome!";
	}
	if (!flagPalindrome)
	{
		return "the word " + userInput + " isn't a palindrome!";
	}
}

int main()
{
	string userInput;
	cout << "Please enter a palindrome!" << endl;
	cin >> userInput;

	cout << palindrome(userInput);

	return 0;

}

