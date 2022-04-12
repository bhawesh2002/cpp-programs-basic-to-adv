/*Write a program which asks the user to enter three fractions. Using the three fractions
inputted by the user, find the resultant sum in fractional
form and display it on the screen.
Hint: Use cascading of operators to simplify program*/

#include <iostream>

using namespace std;

int main(){

    int num1,num2,num3,den1,den2,den3;
    cout << "Enter the numerator and denominator of the first fraction: " << endl;
    cin >> num1 >> den1;
    cout << "Enter the numerator and denominator of the second fraction: " << endl;
    cin >> num2 >> den2;
    cout << "Enter the numerator and denominator of the third fraction: " << endl;
    cin >> num3 >> den3;

    int num_sum = num1*den2 + num2*den3 + num3*den1;
    int den_sum = den1*den2*den3;

    cout << "The sum of the fractions is: " << num_sum << "/" << den_sum << endl;

    return 0;
}
