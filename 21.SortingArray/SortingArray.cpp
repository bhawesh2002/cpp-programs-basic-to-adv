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
    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
    {
        if(numbers[i] > numbers[i+1]){
            int temp = numbers[i];
            numbers[i] = numbers[i+1];
            numbers[i+1] = temp; 
        }
    }
    cout << "The sorted array is" << endl;
    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
    {
        cout << i + 1 << "." << numbers[i] << endl;
    }
    return 0;
}