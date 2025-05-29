#include <iostream>

using namespace std;

int main()
{
    char ch;

    cout << "Enter The Charactr: ";
    cin >> ch;

    if (ch >= 65 && ch <= 90)
    {
        char lower = ch + 32;
        cout << lower;
    }
    else
    {
        char Upper = ch - 32;
        cout << Upper;
    }

    return 0;
}