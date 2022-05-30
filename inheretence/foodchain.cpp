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
    string food_type;

public:
    void get_type()
    {
        cout << "What does Animal eat?"
             << "1)flesh"
             << "2)plants"
             << "3)both" << endl;
    }
};
int main()
{
    return 0;
}