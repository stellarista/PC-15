#include<iostream>
#include<string>
using namespace std ;

class Employee
{
    private:
    string name ;
    int number ;
    int date ;

    public :

    Employee()
 {
  this -> name = name ;
  this -> number = number ;
  this -> date = date ;

 }

    void setName(string namee)
    {
        name = namee ;
    }
    void setNumber(int numberr)
    {
        number = numberr ;
    }
    void setDate(int datee)
    {
        date = datee ;
    }

    string getName()
    {
        return name ;
    }
    int getNumber()
    {
        return number  ;
    }
    int getDate()
    {
        return date ;
    }

};

class ProductionWorker:public Employee
{
 int shift;
 double hourPayment ;

 public :
 ProductionWorker()
 {
  this -> shift = shift ;
  this -> hourPayment = hourPayment ;
 }

 void setShift(int shiftt)
 {
  shift = shiftt ;

 }

 void setHourPayment(double hourPaymentt)
 {
  hourPayment = hourPaymentt ;
 }

 int getShift()
 {
  return shift ;
 }

 double getHourPayment()
 {
  return hourPayment ;
 }

 class TeamLeader:public ProductionWorker
 {
    private:
    int trainingHours, hoursAttend;
    double monthlyBonus = hourPayment * hoursAttend;

    public:
    TeamLeader()
    {
        this->monthlyBonus = monthlyBonus;
        this->trainingHours = trainingHours;
        this->hoursAttend = hoursAttend;
    }
    void setMonthlyBonus(double monthlyBonuss)
    {
        monthlyBonus = monthlyBonuss;
    }
    void setTrainingHours(int trainingHourss)
    {
        trainingHours = trainingHourss;
    }
    void setHoursAttend(int hoursAttendd)
    {
        hoursAttend = hoursAttendd;
    }
    double getMB()
    {
        return monthlyBonus;
    }
    int getTH()
    {
        return trainingHours;
    }
    int getHA()
    {
        return hoursAttend;
    }

    void printGetMB()
    {
        if (hoursAttend >= trainingHours)
        {
            cout<<getMB()<<endl;
        } else {
            cout <<"You don't get a monthly bonus"<<endl;
        }
    }
 };

};


int main()
{
 string namee ;
 int numberr,datee,shiftt,TH,HA;
 double hourPaymentt, MB;
 ProductionWorker input ;
 TeamLeader print;

 cout<<"Name: ";
 cin>> namee ;

 cout<<"ID: " ;
 cin>>numberr ;

 cout<<"Hire Date(DDMMYYY): ";
 cin>>datee ;

 cout<<"Shift(1/2): ";
 cin >>shiftt;

 cout<<"Hourly Payment($): ";
 cin>>hourPaymentt;

 cout<<"Required training hours: ";
 cin>>TH;

 cout <<"Hours attended in the training: ";
 cin>>HA;



 input.setName(namee);
 input.setNumber(numberr);
 input.setDate(datee);
 input.setShift(shiftt);
 input.setHourPayment(hourPaymentt);

 print.setTrainingHours(TH);
 print.setHoursAttend(HA);

 cout<<endl<<endl;

 cout<<"Name: "<<input.getName()<<endl;
 cout<<"ID: "<<input.getNumber()<<endl;;
 cout<<"Hire Date: "<<input.getDate()<<endl;
 cout<<"Shift: "<<input.getShift()<<endl;
 cout<<"Hourly Payment: $"<<input.getHourPayment()<<endl;
 print.printGetMB();

 /*if (HA >= TH)
 {
     cout <<"Monthly Bonus: $"<<input.getHourPayment()*print.getHA()<<endl;
 } else
 {
     cout <<"you don't get a monthly bonus"<<endl;
 }
*/

 return 0;
}
