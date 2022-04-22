#include <iostream>

using namespace std;

struct employee // structure declaration containing the employee's name, id, and salary
{
    char name[20];
    int salary;
};

int main()
{
    employee e1; // declaration of the structure variable e1
    employee e2; // declaration of the structure variable e2
    cout << "Enter Employee Details: "
         << "\nName: ";
    cin >> e1.name; // input of the employee's name
    cout << "Salary: ";
    cin >> e1.salary; // input of the employee's salary

    e2 = e1;                       // assignment of the structure variable e2 to the structure variable e1
    cout << "Employee 2 Details: " // output of the employee's name and salary
         << "\nName: " << e2.name << "\nSalary: " << e2.salary;
    return 0;
}