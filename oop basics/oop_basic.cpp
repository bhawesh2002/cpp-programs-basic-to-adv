#include <iostream> //for basic i/o

using namespace std; // avoid using std:: everytime

class student
{                  // class declaration
private:           // private members
    char name[30]; // name of the student
    int roll;      // roll number of the student
public:            // public members
    void getdata()
    { // function to get data. All private data members of the class are accessible only to member functions of the class
        // In thiis case getdata() function
        cout << "Enter name: "; // prompt
        cin >> name;            // get name
        cout << "Enter roll: "; // prompt
        cin >> roll;            // get roll
    }
    void display()
    {                                     // function to display data
        cout << "Name: " << name << endl; // display name
        cout << "Roll: " << roll << endl; // display roll
    }
};

int main()
{
    student s1;   // object of the class
    s1.getdata(); // call getdata() function
    s1.display(); // call display() function
    return 0;
}
