#include <iostream>

using namespace std;

int main()
{
    int age;

    cout << "Enter The Age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "It Is Eligible For Vote";
    }
    else
    {
        cout << "It Is Not Eligible For Vote";
    }

    return 0;
}