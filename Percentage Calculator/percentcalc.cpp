#include <iostream> //preprocessor directive, instructs the preprocessor to include the iostream library

using namespace std; // we are using the standard namespace(simply,no need to use std::cout,use cout instead)

int main()
{                                                       // main function, most important function in a program
    int m1, m2, m3, m4, m5;                             // declaring varuiable to hold makrs of students
    int total = 0;                                      // variable to hold total marks, initializing it to 0 to get rid of any junk values
    cout << "Please Enter Your Marks(out fo 100): ";    // prompting user to enter marks
    cin >> m1 >> m2 >> m3 >> m4 >> m5;                  // accepting marks from user
    total = m1 + m2 + m3 + m4 + m5;                     // calculating total marks
    cout << "Total Marks: " << total << endl;           // displaying total marks
    float percent = 0;                                  // variable to hold percentage, initializing it to 0 to get rid of any junk values
    percent = float(total * 100) / 500;                 // calculating percentage using formaula
    cout << "Percentage is " << percent << "%" << endl; // printing percentage
    return 0;
}