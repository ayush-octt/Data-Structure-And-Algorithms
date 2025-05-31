#include <iostream>

using namespace std;

int main()
{
    int num = 1, sum = 0;
    for (num; num <= 10; num++)
    {
        sum += num;
    }
    cout << "Sum Of 10 Numbers: " << sum;

    return 0;
}