#include <iostream>

using namespace std;

int main()
{
    int totalCol = 5;
    for (int col = 1; col <= totalCol ;col++)
    {
        for (int row = 1; row <= totalCol - col; row++)
        {
            cout << " ";
        }

        for(int row = 1; row<=col;row++)
        {
            cout<<row;
        }
        cout << endl;
    }

    return 0;
}