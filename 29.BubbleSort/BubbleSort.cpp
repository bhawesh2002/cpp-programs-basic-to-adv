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
    cout << "The numbers entered are:-\n";
    for (int i = 0; i < sizeof(num) / sizeof(int); i++)
    {
        cout << num[i] << endl;
    }

    return 0;
}