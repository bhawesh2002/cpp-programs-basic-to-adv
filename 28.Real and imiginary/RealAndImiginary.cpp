#include <iostream>

using namespace std;

struct complex
{
    int real;
    int img;
};

void get_complex(complex c1)
{
    cout << "Enter real and imaginary part: " << endl;
    cout << "Enter the real part: ";
    cin >> c1.real;
    cout << "Enter the imaginary part: ";
    cin >> c1.img;
}

int main()
{
    complex c1, c2;
    get_complex(c1);
    get_complex(c2);
    int sum_real = c1.real + c2.real;
    int sum_img = c1.img + c2.img;
    cout << "Sum of complex numbers: " << sum_real << " + " << sum_img << "i" << endl;
    return 0;
}