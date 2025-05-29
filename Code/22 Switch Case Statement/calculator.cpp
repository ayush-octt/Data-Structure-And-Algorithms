#include <iostream>

using namespace std;

int main()
{
    char ch;
    int num1, num2;

    cout << "Enter The Number 1: ";
    cin >> num1;

    cout << "Enter The Number 2: ";
    cin >> num2;

    cout << "Enter The Operation +, -, *, /, %: ";
    cin >> ch;

    switch (ch)
    {
    case '+':
        cout << "Addition: " << num1 + num2;
        break;

    case '-':
        cout << "Subtraction: " << num1 - num2;
        break;

    case '*':
        cout << "Multiplication: " << num1 * num2;
        break;

    case '/':
        cout << "Division: " << num1 / num2;
        break;

    case '%':
        cout << "Modules: " << num1 % num2;
        break;

    default:
        cout << "Enter The Valid Operation";
        break;
    }
    return 0;
}