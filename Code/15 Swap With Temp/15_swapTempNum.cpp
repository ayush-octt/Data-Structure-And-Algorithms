#include <iostream>

using namespace std;

int main()
{
    int num1, num2, temp;

    cout << "Enter The Number 1: ";
    cin >> num1;

    cout << "Enter The Number 2: ";
    cin >> num2;

    cout << "Before Swap: " << num1 << " " << num2 << endl;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After Swap: " << num1 << " " << num2 << endl;

    return 0;
}