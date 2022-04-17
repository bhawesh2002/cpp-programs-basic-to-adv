/*Suppose that in your computer science class, each student secures a certain percentage of
marks and the teacher decides to give grace of 10 % to each student. If the class contains
20 students, write a C++ program to do the needful?*/

#include <iostream>

using namespace std;

int main()
{
    int marks[20];
    int incremented_marks[20];
    cout << "Enter your Marks" << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << i + 1 << ".";
        cin >> marks[i];
        incremented_marks[i] = (marks[i] + 10);
    }
    cout << "Your Incremented Marks are" << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << i + 1 << "." << incremented_marks[i] << endl;
    }
}