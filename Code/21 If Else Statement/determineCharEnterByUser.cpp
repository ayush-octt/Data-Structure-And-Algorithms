#include <iostream>

using namespace std;

int main()
{
    char ch;

    cout << "Enter The Char: ";
    cin >> ch;

    if (ch >= 0 && ch <= 32)
    {
        cout << "It Is Control Characters: " << ch;
    }
    else if (ch >= 48 && ch <= 57)
    {
        cout << "It is Digit Character: " << ch;
    }
    else if ((ch >= 32 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 255))
    {
        cout << "It is Special Character: " << ch;
    }
    else if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {
        cout << "It is Alphabet Characters: " << ch;
    }
    else
    {
        cout << "Out Of ASCII Table Range";
    }

    return 0;
}