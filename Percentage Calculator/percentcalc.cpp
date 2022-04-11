#include <iostream>         //preprocessor directive, instructs the preprocessor to include the iostream library

using namespace std;        //we are using the standard namespace(simply,no need to use std::cout,use cout instead)

int main(){                 //main function, most important function in a program
    int m1,m2,m3,m4,m5;     //declaring varuiable to hold makrs of students
    int total = 0;          //variable to hold total marks, initializing it to 0 to get rid of any junk values
    total = m1 + m2 + m3 + m4 + m5; //calculating total marks
    int percent = 0;        //variable to hold percentage, initializing it to 0 to get rid of any junk values
    percent = (total/500)*100;  //calculating percentage using formaula
    cout << "Percentage is " << percent << "%" << endl; //printing percentage
    return 0;
}