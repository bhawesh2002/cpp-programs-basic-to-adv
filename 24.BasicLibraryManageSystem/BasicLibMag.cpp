#include <iostream>
#include <cstring>
struct library
{
    char book_name[25];
    char author[25];
    int shelf_number;
    int price;
};

using namespace std;

int main()
{
    library book[5] = {0};
    int choice; // for user choice
    int a = 5;  // total no bo books in library
    do
    {
        cout << "BASIC LIBRAY MANAGEMENT SYSTEM" << endl;
        cout << "==============================" << endl;
        cout << "1. Add a new book(You can add upto " << sizeof(book) / sizeof(library) << " books)" << endl;
        cout << "2. Remove a book" << endl;
        cout << "3. Search for a book" << endl;
        cout << "4. Display all books" << endl;
        cout << "5. Exit" << endl;
        cout << "===============================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "Enter the details of book you wnat to add: " << endl;
            int i = 0;
            while (a <= 5)
            {
                if (book[i].shelf_number != 0)
                {
                    cout << "Enter the name of book: ";
                    cin >> book[i].book_name;
                    cout << "Enter the author of book: ";
                    cin >> book[i].author;
                    cout << "Enter the shelf number of book: ";
                    cin >> book[i].shelf_number;
                    cout << "Enter the price of book: ";
                    cin >> book[i].price;
                    i++;
                    a--;
                }
                else if (book[i].shelf_number == 0)
                {
                    i++;
                }
                else if (i == 5)
                {
                    cout << "Sorry, you can't add more books" << endl;
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
            cin.ignore();
            cin.getline(book_name, 25);
            cout << "Enter the shelf number: ";
            cin >> shelf_number;
            for (int i = 0; i < 5; i++)
            {
                if (book[i].shelf_number == shelf_number && strcmp(book[i].book_name, book_name) == 0)
                {
                    book[i] = {0}; // set the value of book[i] to {0}
                    cout << "Book removed successfully" << endl;
                    a--; // to remove the book from the array
                    break;
                }
                else
                {
                    cout << "Book not found" << endl;
                    break;
                }
            }
        }
        break;
        case 3: // search for a book
        {
            cout << "Enter the name of book: ";
            char book_name[25];
            cin.clear();
            cin.ignore();
            cin.getline(book_name, 25);
            for (int i = 0; i < 5; i++)
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
                    break;
                }
            }
        }
        break;
        case 4:
        {
            cout << "====Displaying All Books====" << endl;
            for (int i = 0; i < 5; i++)
            {
                cout << "Book No: " << i + 1 << endl;
                cout << "Book name: " << book[i].book_name << endl;
                cout << "Author: " << book[i].author << endl;
                cout << "Shelf number: " << book[i].shelf_number << endl;
                cout << "Price: " << book[i].price << endl;
                cout << "============================" << endl;
            }
        }
        break;
        default:
        {
            if (choice > 5)
            {
                cout << "Invalid Choice" << endl;
            }
        }
        break;
        }
    } while (choice != 5);
    cout << "*******Thank You for Visiting*******" << endl;
}