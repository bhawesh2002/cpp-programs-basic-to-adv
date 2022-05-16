#include <iostream>

using namespace std;

class center
{
    int no_of_canditates;
    int roll_no;
    int no_of_classes;
    int calc_center_no(int candidates, int roll, int classes); // private function to calculate center no

public:
    void get_center_details();  // public function to get center details
    void print_centre_details() // public function to print center details
    {
        int centre_no = calc_center_no(no_of_canditates, roll_no, no_of_classes);
        cout << "Centre no: " << centre_no << endl;
    };
};

void center::get_center_details()
{
    cout << "Enter no of candidates: ";
    cin >> no_of_canditates;
    cout << "Enter no of classes: ";
    cin >> no_of_classes;
    cout << "Enter roll no: ";
    cin >> roll_no;
}

int center::calc_center_no(int candidates, int roll, int classes) // private function to calculate center no
{
    int capacity = 50;
    int class_no;
    if (roll % 2 == 0 && roll > 50)
    {
        while (class_no > classes)
        {
            class_no = roll % classes;
        }
    }
    else if (roll < 50)
    {
        while (class_no > classes)
        {
            class_no = (roll % classes) + 1;
        }
    }
    return class_no;
}

int main()
{
    center c1;
    c1.get_center_details();
    c1.print_centre_details();
    // private member functions are not accessible from outside the class
    // so we use the print_centre_details() function to print the center details
    return 0;
}