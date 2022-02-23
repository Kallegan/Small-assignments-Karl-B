#include <iostream>

using namespace std;

int swapReferense(int& A, int& B)
{
    int temp = B;
    B = A;
    A = temp;

    return A, B;
}

int swapPointers(int* A, int* B)
{
    int temp = *B;
    *B = *A;
    *A = temp;

    return *(A, B);
}

int main()
{
    int A, B, input;

    int* ptrA = &A;
    int* ptrB = &B;

    cout << "Hello! please input number for A: ";
    cin >> A;
    cout << "Input a number for B: ";
    cin >> B;
    cout << "Select your prefered method for performing the swap!" << endl;
    cout << "1. Swap by using STL" << endl;
    cout << "2. Swap by reference" << endl;
    cout << "3. Swap by pointers" << endl;
    cin >> input;

    switch (input)
    {
    case 1:
        swap(A, B);
        break;
    case 2:
        swapReferense(A, B);
        break;
    case 3:
        swapPointers(ptrA, ptrB);
        break;
    default:
        cout << "Invalid input. No swaps performed" << endl;
        break;
    }

    if (input > 0 && input < 4)
        cout << "A value is now: " << A << " and B value is now:  " << B << endl;
}



