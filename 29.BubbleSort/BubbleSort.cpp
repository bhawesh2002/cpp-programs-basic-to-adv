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
    int choice;
    cout << "1)sort in ascending\n"
         << "2)sort in descending\n";
    cin >> choice;
    switch (choice)
    {
    case 1:

        for (int i = 0; i < sizeof(num) / sizeof(int); i++)
        {
            for (int j = 0; j < (sizeof(num) / sizeof(int)) - 1; j++)
            {
                if (num[j] > num[i])
                {
                    swap(num[i], num[j]);
                }
            }
        }
        break;
    case 2:

        for (int i = 0; i < sizeof(num) / sizeof(int); i++)
        {
            for (int j = 0; j < (sizeof(num) / sizeof(int)) - 1; j++)
            {
                if (num[j] < num[i])
                {
                    swap(num[i], num[j]);
                }
            }
        }

        break;
    default:
        cout << "Invalid Value" << endl;
        cout << "Terminating " << endl;
        exit(0);
        break;
    }
    cout << "The sorted array is:-\n";
    for (int i = 0; i < sizeof(num) / sizeof(int); i++)
    {
        cout << num[i] << endl;
    }
    return 0;
}