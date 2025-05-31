#include <iostream>

using namespace std;

int main()
{
    int n, m, sum = 0;

    cout << "Enter The Starting Number: ";
    cin >> m;

    cout << "Enter The End Number: ";
    cin >> n;

    for (m; m <= n; m++)
    {
        sum += m;
    }

    cout << "Sum Is: " << sum;

    return 0;
}