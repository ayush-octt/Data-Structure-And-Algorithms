#include <iostream>

using namespace std;

int main()
{
    int num, range, largest = -1;

    cout << "Enter The Range Of Numbers: ";
    cin >> range;

    cout << "Enter The Numbers:" << endl;

    for (int i = 1; i <= range; i++)
    {
        cin >> num;
        if (num > largest)
        {
            largest = num;
        }
    }

    cout << "Largest Number Is: " << largest;

    return 0;
}