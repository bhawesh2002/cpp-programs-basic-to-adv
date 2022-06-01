#include <iostream>

using namespace std;

int main()
{
    int num[5] = {0};
    cout << "Enter numbers to fill the array:-\n";
    for (int i = 0; i < sizeof(num) / sizeof(int); i++)
    {
        cout << "Enter the " << i + 1 << " element: ";
        cin >> num[i];
    }

    for (int i = 0; i < sizeof(num) / sizeof(num); i++)
    {
        for (int j = 1; j < (sizeof(num) / sizeof(num)) - 1; j++)
        {
            if (num[i] > num[j])
            {
                swap(num[i], num[j]);
            }
        }
    }
    return 0;
}