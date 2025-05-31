#include <iostream>

using namespace std;

int main()
{
    int num, range, sum = 0;
    ;

    cout << "How Many Numbers You Entered: ";
    cin >> range;

    for (int i = 1; i <= range; i++)
    {
        cout << "Enter The Number: ";
        cin >> num;

        sum += num;
    }

    cout << "Average Of Entered Numbers: " << sum / range;

    return 0;
}