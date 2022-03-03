#include <iostream>
#include <string.h> 

using namespace std;

void print_resault(char* s);

int main()
{



	char s[] = "abcdefghiabkasldasdcxz";
	cout << "enter stuff";
	cin >> s;

	print_resault(s);

	return 0;
}

void print_resault(char* s)
{
	int length = strlen(s);
	//wanted to use length but moved on since I had to use a more complex method.
	char unknown[26]; //todo try static cast length.
	int counted = 0;

	for (int i = 0; i < length; i++)
	{
		bool already_counted = false;
		for (int j = 0; j < counted; j++)
			if (s[i] == unknown[j])
			{
				already_counted = true;
			}

		if (already_counted) continue;

		int count = 0;
		for (int j = 0; j < length; j++)
		{
			if (s[i] == s[j]) count++;
		}
		printf("%c - %d\n", s[i], count);

		unknown[counted] = s[i];
		counted++;
	}

}