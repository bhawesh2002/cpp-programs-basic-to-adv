#include <iostream>
#include <string> //for strcmp(): function used to compare strings
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
    library book[5];
    cout << "BASIC LIBRAY MANAGEMENT SYSTEM" << endl;
    cout << "==============================" << endl;
    cout << "1. Add a new book(You can add upto " << sizeof(book) / sizeof(library) << " books)" << endl;
    cout << "2. Remove a book" << endl;
    cout << "3. Search for a book" << endl;
    cout << "4. Display all books" << endl;
    cout << "5. Exit" << endl;
    cout << "===============================" << endl;
    cout << "Enter your choice: ";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        cout << "Enter the details of book you wnat to add: " << endl;
        for (int i = 0; i <= 5; i++)
        {
            cout << "Book name: ";
            cin.getline(book[i].book_name, 25);
            cout << "Author: ";
            cin.getline(book[i].author, 25);
            cout << "Shelf number: ";
            cin >> book[i].shelf_number;
            cout << "Price: ";
            cin >> book[i].price;
            cout << "Wanna Add More Books?(y/n): ";
            char ch;
            cin >> ch;
            if (ch == 'y')
            {
                cout << "Enter the details of book you wnat to add: " << endl;
            }
            else
            {
                break;
            }
        }
    }
    break;
    case 2:
    {
        cout << "Enter the name & shelf of book you want to remove" << endl;
        char book_name[25];
        int shelf_number;
        cout << "Enter the name of book: ";
        cin.getline(book_name, 25);
        cout << "Enter the shelf number: ";
        cin >> shelf_number;
        for (int i = 0; i <= 5; i++)
        {
            if (book[i].shelf_number == shelf_number && strcmp(book[i].book_name, book_name) == 0)
            {
                cout << "Book removed successfully" << endl;
                break;
            }
            else
            {
                cout << "Book not found" << endl;
            }
        }
    }
    break;
    case 3: //search for a book
    {
        cout << "Enter the name of book: ";
        char book_name[25];
        cin.getline(book_name, 25);
        for (int i = 0; i <= 5; i++)
        {
            if (strcmp(book[i].book_name, book_name) == 0)
            {
                cout << "Book found" << endl;
                cout << "Book name: " << book[i].book_name << endl;
                cout << "Author: " << book[i].author << endl;
                cout << "Shelf number: " << book[i].shelf_number << endl;
                cout << "Price: " << book[i].price << endl;
                break;
            }
            else
            {
                cout << "Book not found" << endl;
            }
        }
    }

    default:
        break;
    }
    return 0;
}