#include <iostream>

using namespace std;

class time
{
    int hour;
    int minute;

public:
    void gettime()
    {
        cout << "Enter hour: ";
        cin >> hour;
        cout << "Enter minute: ";
        cin >> minute;
    }
    void showtime()
    {
        cout << "Time: " << hour << ":" << minute << endl;
    }
    void sum(time t1, time t2)
    {
        hour = t1.hour + t2.hour;
        minute = t1.minute + t2.minute;
        if (minute >= 60)
        {
            hour += 1;
            minute -= 60;
        }
    }
};

int main()
{
    time t1, t2, t3;
    t1.gettime();
    t2.gettime();
    t3.sum(t1, t2);
    t3.showtime();
    return 0;
}