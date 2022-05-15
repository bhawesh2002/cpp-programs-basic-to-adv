#include <iostream>

using namespace std;

class hospital
{
    char name[30];
    int ward_no;
    int bed_no;
    int patient_id;
    char aliment[30];

public:
    void getdata();
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Ward no: " << ward_no << endl;
        cout << "Bed no: " << bed_no << endl;
        cout << "Patient id: " << patient_id << endl;
        cout << "Aliment: " << aliment << endl;
    }
};

void hospital::getdata()
{
    cout << "Enter name: ";
    cin.getline(name, 30);
    cin.clear();
    cout << "Enter ward no: ";
    cin >> ward_no;
    cout << "Enter bed no: ";
    cin >> bed_no;
    cout << "Enter patient id: ";
    cin >> patient_id;
    cout << "Enter aliment: ";
    cin.ignore();
    cin.getline(aliment, 30);
}

int main()
{
    hospital p1;
    p1.getdata();
    p1.display();
    return 0;
}
