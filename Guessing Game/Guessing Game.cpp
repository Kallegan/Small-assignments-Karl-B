#include <iostream>

using namespace std;

int main()
{
    int playerTries = 0, playerNumber;
    int randomNumber = 1 + (rand() % 10); //randomizes number once.

    do
    {
        cout << "Try to guess the correct number: ";
        cin >> playerNumber;

        if (randomNumber != playerNumber)
        {
            cout << "Wrong number! Try again!" << endl;
            playerTries++;
        }

    } while (randomNumber != playerNumber);

    cout << "CORRECT! It took you " << playerTries << " tries." << endl;

    system("pause<0");

}