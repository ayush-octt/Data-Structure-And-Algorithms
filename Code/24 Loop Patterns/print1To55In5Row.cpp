#include <iostream>

using namespace std;

int main()
{
    for (int col = 1; col <= 5; col++)
    {
        for (int row = 1; row <= col; row++)
        {
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}