#include <iostream>

using namespace std;

int main()
{
    int numbers[5] = {0};
    cout << "Fill the array with 5 numbers" << endl;
    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++) //loop to fill the array
    {
        cout << i + 1 << ".";
        cin >> numbers[i];
    }
    //sort array in ascending order
    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
    {
        if (numbers[i] > numbers[i + 1])
        {
            int temp = numbers[i];
            numbers[i] = numbers[i + 1];
            numbers[i + 1] = temp;
        }
    }

printArray:
{
    cout << "The sorted array is" << endl;
    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
    {

        cout << i + 1 << "." << numbers[i] << endl;
    }
}
    return 0;
}
