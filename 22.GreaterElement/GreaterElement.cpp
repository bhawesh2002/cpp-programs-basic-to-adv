#include <iostream>

using namespace std;

int main()
{
    int numbers[5] = {0}; // array of 5 elements
    cout << "Fill the array with 5 numbers" << endl;
    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
    {
        cout << i + 1 << ".";
        cin >> numbers[i];
    }
    int greater[5] = {0}; // array to store greater elements of numbers array
    // for loop to find greater element
    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
    {
        for (int j = i + 1; j < sizeof(numbers) / sizeof(int); j++)
        {

            if (numbers[i] < numbers[j])
            {
                greater[i] = numbers[j];
                break;
            }
        }
    }
    for (int k = 0; k < sizeof(greater) / sizeof(int); k++) // set zero elements of greater elements array to -1
    {
        if (greater[k] == 0)
        {
            greater[k] = -1;
        }
    }

    cout << "The greater elements of the array are" << endl;
    for (int i = 0; i < sizeof(greater) / sizeof(int); i++)
    {
        cout << i + 1 << "." << greater[i] << endl;
    }
    return 0;
}