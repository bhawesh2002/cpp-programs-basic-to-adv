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
    cout << "1.Sort in Ascending" << endl;
    cout << "2.Sort in Descending" << endl;
    cout << "Enter your choice" << endl;
    cin >> choice;
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
        for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
        {
            for (int j = i +1 ; i < sizeof(numbers)/sizeof(int); j++)
            {
                if (numbers[j] > numbers[i])
                {
                    int temp = numbers[i];
                    numbers[i] = numbers[j];
                    temp = numbers[j];
                }
                
            }
            
        }
    }
    break;
    default:
        break;
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
