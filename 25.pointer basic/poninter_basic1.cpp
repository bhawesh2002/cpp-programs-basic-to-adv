#include <iostream>  // for I/O functionality

using namespace std;  // for using cout instead of std::cout

int main(){
    int num1 = 10, num2 = 5;   //declaring variables
    int *ptr1;  //declaring a pointer to variable  using derefferencing operator(*)
    ptr1 = &num1;  //assigning address of num1 to ptr1 using ampersand(&)
    *ptr1 = 20; //assigning value 20 to num1 by changing the `value` of ptr1(Note: *ptr1 is used to access the value  stored in ptr1)
    cout << "num1 = " << num1 << endl;  //printing value of num1
    ptr1 = &num2; //assigning address of num2 to ptr1
    *ptr1 = 10;//assigning value 10 to num2 by changing the `value` of ptr1(Note: *ptr1 is used to access the value  stored in ptr1)
    cout << "num2 = " << num2 << endl; //printing value of num2
    return 0;  //returning 0
}