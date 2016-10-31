#include <iostream>

using namespace std;

class Time
{
    protected:
        int hour, min, sec;

    public:
        Time()
        {
            hout = 0;
            min = 0;
            sec = 0;
        }

        Time(int hour, int min, int sec)
        {
            hour = h;
            min = m;
            sec = s;
        }
        int getHout()
        {
            return hour;
        }
        int getMin()
        {
            return min;
        }
        int getSec()
        {
            return sec;
        }

};

class MilTime:public Time
{
    int MilHours;
    int MilSeconds

    public:
        MilTime()
        {

        }
};


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
