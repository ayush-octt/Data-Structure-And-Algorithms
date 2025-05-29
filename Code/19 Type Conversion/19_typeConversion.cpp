#include <iostream>

using namespace std;

int main()
{
    int num;
    float num1;
    char ch;

    cout << "Enter The Integer Number: ";
    cin >> num;

    cout << "Enter The Float Number: ";
    cin >> num1;

    cout << "Enter The Character: ";
    cin >> ch;

    cout << float(num) << endl;
    cout << int(num1) << endl;
    cout << int(ch);

    return 0;
}