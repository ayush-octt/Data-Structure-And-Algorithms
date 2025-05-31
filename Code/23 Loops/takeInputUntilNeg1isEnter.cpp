#include <iostream>

using namespace std;

int main()
{
    int num = 1, pos_count = 0, neg_count = 0, zero_count = 0;

    cout << "For Exit -1: " << endl;
    ;
    while (num >= 0 || num <= 0)
    {
        cout << "Enter The Number: ";
        cin >> num;

        if (num == -1)
            break;

        else if (num < -1)
            neg_count++;

        else if (num > 0)
            pos_count++;

        else
            zero_count++;
    }

    cout << "Total Number Of Positive Entered: " << pos_count << endl;
    cout << "Total Number Of Negative Entered: " << neg_count << endl;
    cout << "Total Number Of Zeros Entered: " << zero_count << endl;

    return 0;
}