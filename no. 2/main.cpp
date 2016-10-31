#include<iostream>
#include<string>
using namespace std ;

class Employee
{
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

class ShiftSupervisor:public Employee
{
    private:
    double salary, bonus;
    public:
    ShiftSupervisor()
    {
        this->salary=salary;
        this->bonus=bonus;
    }
    void setSalary(double salaryy)
    {
        salary = salaryy;
    }
    void setBonus(double bonuss)
    {
        bonus = bonuss;
    }
    int getBonus()
    {
        return bonus;
    }
    int getSalary()
    {
        return salary;
    }
};



int main()
{
 string namee ;
 int numberr, datee;
double anSalary, anBonus;

Employee input;
ShiftSupervisor print;

 cout<<"Name: ";
 cin>> namee ;

 cout<<"ID: " ;
 cin>>numberr ;

 cout<<"Hire Date(DDMMYYY): ";
 cin>>datee ;

 cout << "Annual Salary($): ";
 cin >> anSalary;

 cout <<"Annual Bonus($): ";
 cin>>anBonus;

 input.setName(namee);
 input.setNumber(numberr);
 input.setDate(datee);
 print.setSalary(anSalary);
 print.setBonus(anBonus);

 cout<<endl<<endl;

 cout<<"Name: "<<input.getName()<<endl;
 cout<<"ID: "<<input.getNumber()<<endl;;
 cout<<"Hire Date: "<<input.getDate()<<endl;
 cout <<"Annual Salary: $"<<print.getSalary()<<endl;
 cout <<"Annual Bonus: $"<<print.getBonus()<<endl;

 return 0;
}
