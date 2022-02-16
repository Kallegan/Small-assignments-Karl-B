#include <iostream>

using namespace std;

int main()
{
    int input;

    cout << "Hello! Please input a whole number: ";
    cin >> input;

    (input % 2 == 0) ? cout << "Even number!" : cout << "Odd number!";    

    system("pause>0");
}
//checks if absolut math of the number is 0, then it must be even. 