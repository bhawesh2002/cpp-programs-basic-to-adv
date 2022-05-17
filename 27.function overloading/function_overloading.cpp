#include <iostream>

using namespace std;

int sum(int a, int b)
{
    return a + b;
}

float sum(float c, float d)
{
    return c + d;
}

int main()
{
    int a = 10, b = 10;
    float c = 10, d = 10;
    cout << "sum(a,b) = " << sum(a, b) << endl;
    cout << "sum(c,d)= " << sum(c, d) << endl;
    return 0;
}