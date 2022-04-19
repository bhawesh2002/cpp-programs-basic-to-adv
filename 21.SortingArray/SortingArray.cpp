#include <iostream>

using namespace std;

int main()
{
    int numbers[5] = {0};
    cout << "Fill the array with 5 numbers" << endl;
    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++) // loop to fill the array
    {
        cout << i + 1 << ".";
        cin >> numbers[i];
    }
    int choice;
    while (choice != 3)
    {
        switch (choice)
        {
        case 1:
        {
            // sort array in ascending order
            for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
            {
                for (int j = i + 1; j < sizeof(numbers) / sizeof(int); j++)
                {
                    if (numbers[i] > numbers[j])
                    {
                        int temp = numbers[i];
                        numbers[i] = numbers[j];
                        numbers[j] = temp;
                    }
                }
            }
            goto printArray;
        }
        break;
        case 2:
        {
            // sort array in descending order
            for (int k = 0; k < sizeof(numbers) / sizeof(int); k++)
            {
                for (int l = k + 1; l < sizeof(numbers) / sizeof(int); l++)
                {
                    if (numbers[k] < numbers[l])
                    {
                        int temp = numbers[k];
                        numbers[k] = numbers[l];
                        numbers[l] = temp;
                    }
                }
            }
        }
        break;
        default:
            cout << "INVALID CHOICE" << endl;
            cout << "1.Sort in Ascending" << endl;
            cout << "2.Sort in Descending" << endl;
            cout << "3. I QUIT!" << endl;
            cout << "Enter your choice" << endl;
            cin >> choice;
            break;
        }
    }
    return 0;
printArray:
{
    cout << "The sorted array is" << endl;
    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
    {

        cout << i + 1 << "." << numbers[i] << endl;
    }
}
}