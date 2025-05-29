#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter The Number 1: ";
    cin >> num1;

    cout << "Enter The Number 2: ";
    cin >> num2;

    cout << "Before Swap: " << num1 << " " << num2 << endl;

    swap(num1, num2);

    cout << "After Swap: " << num1 << " " << num2 << endl;

    return 0;
}