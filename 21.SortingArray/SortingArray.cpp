#include <iostream>

using namespace std;

int main()
{
    int numbers[5] = {0};
    cout << "Fill the array with 5 numbers" << endl;
    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
    {
        cout << i + 1 << ".";
        cin >> numbers[i];
    }

    return 0;
}