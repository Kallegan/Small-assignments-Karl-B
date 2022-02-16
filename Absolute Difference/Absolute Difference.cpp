#include <iostream>

using namespace std;

int main()
{
    int A;
    int B;
    int absolutDifferense;

    cout << "Hello! Please enter two whole numbers, positive or negative.\n";
    cin >> A;
    cin >> B;

    absolutDifferense = A - B;

    if (absolutDifferense < 0) //checks if C is smaller than 0 so we can tell if its a negative number.
    {
        absolutDifferense *= -1; //converting C to positive.
    }
    cout << "The absolute difference between A and B is: " << absolutDifferense;

    system("pause>0");
}
