#include <iostream>
#include <string>
using namespace std;

class flight_details
{
    int flight_no;
    string airline_name;
    string source;
    string destination;
    float distance;

public:
    void get_flight_details()
    {
        cout << "Enter flight no: ";
        cin >> flight_no;
        cout << "Enter airline name: ";
        cin >> airline_name;
        cout << "Enter source: ";
        cin >> source;
        cout << "Enter destination: ";
        cin >> destination;
        cout << "Enter distance: ";
        cin >> distance;
    }
    int calc_fuel()
    {
        if (distance > 1000)
            return (distance / 1000) * (distance / 2);
        else
            return 100;
    }
};

int main()
{
    flight_details fd;
    fd.get_flight_details();
    cout << "Fuel required: " << fd.calc_fuel() << endl;
    return 0;
}