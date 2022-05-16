#include <iostream>

using namespace std;

class center
{
    int no_of_canditates;
    int roll_no;
    int no_of_classes;
    int calc_center_no(int candidates, int roll, int classes);

public:
    void get_center_details();
    void print_centre_details()
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

int center::calc_center_no(int candidates, int roll, int classes)
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
    return 0;
}