#include <iostream>
#include <string>

char encrypt(char letter);
char decrypt(char letter);

using namespace std;

int main()
{
    string phrase;
    cout << "Enter phrase to encrypt: ";
    cin >> phrase;
    for (int i = 1; i <= phrase.size(); i++)
    {
        cout << encrypt(phrase[i - 1]);
    }
    
}

char encrypt(char letter)
{
    int ascii = letter;
    char formula = (ascii + 26) % 12;
    if (formula < 33)
    {
        formula += 33;
    }
    return formula;
}