#include <iostream>

using namespace std;

class time // create a class named time
{
    int hour;   // store hour
    int minute; // store minute

public:            // specy public data_members and member_functions
    void gettime() // get time member function
    {
        cout << "Enter hour: ";
        cin >> hour;
        cout << "Enter minute: ";
        cin >> minute;
    }
    void showtime() // show time member function
    {
        cout << "Time: " << hour << ":" << minute << endl;
    }
    void sum(time t1, time t2)  // sum member function
    //We have passed two objects of class time as arguments to this member function
    //This member function will add the time of two objects and return the sum of time
    {
        hour = t1.hour + t2.hour; // add hour of two objects
        minute = t1.minute + t2.minute;// add minute of two objects
        if (minute >= 60)
        {
            hour += 1;
            minute -= 60;
        }
    }
};

int main()
{
    time t1, t2, t3; // create t1, t2, t3 as objects of class time
    t1.gettime();// call to gettime public member function
    t2.gettime();// call to gettime public member function
    t3.sum(t1, t2);// call to sum public member function
    t3.showtime();// call to showtime public member function
    return 0;// return 0
}