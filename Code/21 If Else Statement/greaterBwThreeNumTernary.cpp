#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "ENter The Number 1: ";
    cin >> num1;

    cout << "ENter The Number 2: ";
    cin >> num2;

    cout << "ENter The Number 3: ";
    cin >> num3;

    ((num1 > num2 && num1 > num3) ? cout << "Num1 Is Greater" : (num2 > num1 && num2 > num3) ? cout << "num2 is greater"
                                                                                             : cout << "num3 is greater");

    return 0;
}