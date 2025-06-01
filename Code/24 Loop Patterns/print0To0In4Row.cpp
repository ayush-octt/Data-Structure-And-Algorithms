#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    for (int col = 1; col <= 4; col++)
    {
        for (int row = 1; row <= col; row++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }

    return 0;
}