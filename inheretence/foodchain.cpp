/*The food chain shows how each living thing gets its food. Some animals eat plants and
some eat other animals to survive. Your project is to create first inheritance hierarchy
models of all the food chains that you can think of starting with ‘forest’ as the base class.
Then create a menu driven program which displays the food chains of the various animals
as per the ‘food chain’ hierarchy.
Use inheritance concept where ever possible*/

#include <iostream>

using namespace std;

class forest
{
    string type;
    int food_type;

protected:
    void get_type()
    {
        cout << "What does Animal eat?"
             << "\n1)flesh"
             << "\t2)plants"
             << "\t3)both" << endl;
        cin >> food_type;
        if (food_type == 1)
        {
            type = "carnivore";
        }
        else if (food_type == 2)
        {
            type = "herbivore";
        }
        else if (food_type == 3)
        {
            type = "omnivore";
        }
        else
        {
            cout << "Invalid Input" << endl;
            cout << "Terminating program" << endl;
            exit(0);
        }
    }

public:
    int show_type()
    {
        cout << "The animal is a " << type << endl;
        return food_type;
    }
};

class carnivore : private forest
{
    string animal[8] = {"Lion", "Tiger", "Heyna", "Wolf", "Panther", "Snake", "Eagle", "Grizzly"};

public:
    void show_animal()
    {
        for (int i = 0; i < sizeof(animal) / sizeof(string); i++)
        {
            cout << animal[i] << "  ";
        }
    }
};
class herbivore : private forest
{
    string animal[6] = {"Deer", "Elephant", "Giraffe", "Bison", "Antelope", "Monkeys"};
};
class omnivore : private forest
{
    string animal[7] = {"Bears", "Pigs", "Squrrials", "Chipmunks", "Sloths", "Rats", "Hamsters"};
};
int main()
{
    forest f1;
    f1.get_type();
    int animal_type = f1.show_type();
    switch (animal_type)
    {
    case 1:
    {
        cout << "Tiger" << endl;
    }
    break;
    case 2:
    {
        cout << "Cow" << endl;
    }
    break;
    case 3:
    {
        cout << "Humans" << endl;
    }
    break;
    default:
        break;
    }
    return 0;
}