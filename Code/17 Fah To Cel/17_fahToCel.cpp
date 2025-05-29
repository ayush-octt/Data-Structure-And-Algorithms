#include <iostream>

using namespace std;

int main()
{
    int cel, fah;

    cout << "Enter tHe Fahrenheit: ";
    cin >> fah;

    cel = (0.56) * (fah - 32);

    cout << "Temp In Celsius: " << cel;

    return 0;
}