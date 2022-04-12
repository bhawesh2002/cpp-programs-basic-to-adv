#include <iostream>

#define PI 3.14;

using namespace std;

int main(){
    float radius{0};
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    float area = (radius * radius) * PI;
    cout << "The area of the circle is: " << area << endl;
    return 0;
}