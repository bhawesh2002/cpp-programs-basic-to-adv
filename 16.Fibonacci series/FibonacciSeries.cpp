#include <iostream>

void fibonacci_series(int n);

using namespace std;

int main()
{
    int num;
    cout << "Enter the number of terms in the series: ";
    cin >> num;
    fibonacci_series(num);
    return 0;
}

void fibonacci_series(int n)
{
    int temp = 0;
    int a = 0, b = 1;
    for (int i = 0; i <= n; i++)
    {
        cout << temp << " + ";
        temp = a + b;
        a = b;
        b = temp;
    }
    
}