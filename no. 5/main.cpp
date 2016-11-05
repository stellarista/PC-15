#include<iostream>
#include<string>
using namespace std ;


class Time
{
    protected:
        int hour;
        int min;
        int sec;
    public:
        // Default constructor
        Time()
        { hour = 0; min = 0; sec = 0; }

        // Constructor
        Time(int h, int m, int s)
        { hour = h; min = m; sec = s; }

};

class MilTime:public Time
{
    protected:
    int milHours;
    int milSM; //second minutes
    public:
    MilTime()
    {
        this->milHours=milHours;
        this->milSM=milSM
    }
    void setHours(int milHours)
    {
        this->milHours=milHours;
    }
    void setSeconds(int milSM)
    {
        this->milSM=milSM;
    }
    int getmilHours()
    {
        return milHours;
    }
    int getmilSM()
    {
        return milSM;
    }
    void setTime()
    {
        if(hour >= 1 && hour <=24)
    }
};




int main()
{






	return 0;
}
