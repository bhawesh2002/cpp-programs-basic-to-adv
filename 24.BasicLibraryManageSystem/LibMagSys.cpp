#include <iostream>
#include <string>  //for strcmp(): function used to compare strings
#include <cstdio>  //for gets(): function used to get user input
using namespace std;

struct library
{
    char book_name[25];
    char author[25];
    int shelf_number;
    int price;
};

int main()
{
    
    cout << "BASIC LIBRAY MANAGEMENT SYSTEM" << endl;
    cout << "==============================" << endl;
    cout << "1. Add a new book" << endl;
    cout << "2. Remove a book" << endl;
    cout << "3. Search for a book" << endl;
    cout << "4. Display all books" << endl;
    cout << "5. Exit" << endl;
    cout <<"===============================" << endl;
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case /* constant-expression */:
        /* code */
        break;
    
    default:
        break;
    }
    return 0;
}