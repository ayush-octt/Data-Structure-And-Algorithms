#include <iostream>

using namespace std;

int main()
{
    int ten, five, two, one;

    cout << "Enter The Number Of 10Rs Coins In Piggy Bank: ";
    cin >> ten;

    cout << "Enter The Number Of 5Rs Coins In Piggy Bank: ";
    cin >> five;

    cout << "Enter The Number Of 2Rs Coins In Piggy Bank: ";
    cin >> two;

    cout << "Enter The Number Of 1Rs Coins In Piggy Bank: ";
    cin >> one;

    cout << "Total Money In The Bank: " << 10 * ten + 5 * five + 2 * two + 1 * one;

    return 0;
}