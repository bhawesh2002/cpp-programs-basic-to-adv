#include <iostream>
#include <cstring>

using namespace std;

void text(char string[], int &location) // location is a pointer to int
{
    char *ptr = string;              // ptr is a pointer to char
    int length = strlen(string);     // length is an int
    for (int i = 0; i < length; i++) // i is an int
    {
        *(ptr + i) = toupper(*(ptr + i) + location); // *(ptr + i) is a char
    }
};

int main()
{
    int position = 0;
    char message[] = "Hello World";
    text(message, position); // text(message, position) is a void function
    cout << message << endl;
}