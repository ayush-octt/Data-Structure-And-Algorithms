#include <iostream>

using namespace std;

int main()
{
    int year;

    cout << "Enter The Year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << "It is Leap Year";
    }
    else
    {
        cout << "It Is Not Leap Year";
    }

    return 0;
}