#include <iostream>

using namespace std;

int main()
{
    float celsius; //using float when declaring variable since an int would remove a decimal when converting.
    float fahrenheit;

    cout << "Hello! Please enter a number to convertCelsius to Fahrenheit: ";
    cin >> celsius;

    fahrenheit = (celsius * 9) / 5 + 32; //converts from Celsius. 

    cout << "The tempeture " << celsius << " Celsius is converted to " << fahrenheit << " Farenheit.";

    system("pause>0");
}
