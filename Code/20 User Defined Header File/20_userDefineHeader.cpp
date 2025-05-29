#include <iostream>
#include "factorial.h"
using namespace std;

int main()
{
    int num, f;

    cout << "Enter The Number: ";
    cin >> num;

    f = factorial(num);

    cout << "Factorial Is: " << f;

    return 0;
}