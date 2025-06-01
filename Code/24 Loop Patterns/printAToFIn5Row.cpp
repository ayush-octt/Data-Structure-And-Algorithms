#include <iostream>

using namespace std;

int main()
{
    for (char col = 'A'; col <= 'F'; col++)
    {
        for (char row = 'A'; row <= col; row++)
        {
            cout << row << " ";
        }
        cout << endl;
    }

    return 0;
}