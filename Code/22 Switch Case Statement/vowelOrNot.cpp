#include <iostream>

using namespace std;

int main()
{
    char ch;

    cout << "Enter The Character: ";
    cin >> ch;

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        cout << "It Is Vowel";
        break;

    default:
        cout << "It is Not Vowel";
        break;
    }
}