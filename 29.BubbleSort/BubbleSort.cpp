#include <iostream>

using namespace std;

int main()
{
    int num[5] = {95,52,887,68,123};

    for (int i = 0; i < sizeof(num) / sizeof(num); i++)
    {
        for (int j = 1; j < (sizeof(num) / sizeof(num)); j++)
        {
            if (num[j] > num[i])
            {
                swap(num[i], num[j]);
            }
        }
    }

    cout << "The sorted array is:-\n";
    for (int i = 0; i < sizeof(num) / sizeof(int); i++)
    {
        cout << num[i] << endl;
    }
    return 0;
}