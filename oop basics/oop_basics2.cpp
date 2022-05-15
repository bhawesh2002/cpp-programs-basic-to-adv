#include <iostream>  //fro basic i/o

using namespace std; //avoid using std::

class hospital  //create a classed namedd hospital
{
    //we dont need to specify private:
    //it automatically detects that the members declared without a label are private
    char name[30];  //array of char too store name
    int ward_no; //store ward no of patient
    int bed_no; //bed no of patient
    int patient_id; //id of patient
    char aliment[30];  //specify patients aliment

public:  //specy public data_members and member_functions
    void getdata();  //get data  member function
    void display() //member function to display data entered into private data members of the class
    {
        cout << "Name: " << name << endl;
        cout << "Ward no: " << ward_no << endl;
        cout << "Bed no: " << bed_no << endl;
        cout << "Patient id: " << patient_id << endl;
        cout << "Aliment: " << aliment << endl;
    }
};

void hospital::getdata()  //we can specify the member function declaration outside the class by using data_type class_name :: member_function
{
    cout << "Enter name: ";
    cin.getline(name, 30);  //use getline function to get name
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
{  //main function can only assess public data_members or member_funnctions of the class object
    hospital p1;  //create p1 as object of class hosp ital
    p1.getdata();  //call to getdata public member function
    p1.display(); //call to display function
    return 0;
}
