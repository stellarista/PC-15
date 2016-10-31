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

class ProductionWorker :public Employee
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


};


int main()
{
 string namee ;
 int numberr,datee,shiftt;
 double hourPaymentt ;
 ProductionWorker input ;

 cout<<"Name: ";
 cin>> namee ;

 cout<<"ID: " ;
 cin>>numberr ;

 cout<<"Hire Date(DDMMYYY): ";
 cin>>datee ;

 cout<<"Shift(1/2): ";
 cin >>shiftt;

 cout<<"Hourly Payment($): ";
 cin>>hourPaymentt ;

 input.setName(namee);
 input.setNumber(numberr);
 input.setDate(datee);
 input.setShift(shiftt);
 input.setHourPayment(hourPaymentt);

 cout<<endl<<endl;

 cout<<"Name: "<<input.getName()<<endl;
 cout<<"ID: "<<input.getNumber()<<endl;;
 cout<<"Hire Date: "<<input.getDate()<<endl;
 cout<<"Shift: "<<input.getShift()<<endl;
 cout<<"Hourly Payment: $"<<input.getHourPayment()<<endl;

 return 0;
}
