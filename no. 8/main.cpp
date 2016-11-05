#include <iostream>
#include <string>

using namespace std;

class PersonData
{
    private:
    string lastName, firstName, address;
    string city, state, zip, phone;

    public:
    void setLastName(string lastNamee)
    {
        lastName = lastNamee;
    }
    void setFirstName(string firstNamee)
    {
        firstName = firstNamee;
    }
    void setAddress(string addresss)
    {
        address = addresss;
    }
    void setCity(string cityy)
    {
        city = cityy;
    }
    void setState(string statee)
    {
        state = statee;
    }
    void setZip(string zipp)
    {
        zip = zipp;
    }
    void setPhone(string phonee)
    {
        phone = phonee;
    }
    string getLastName()
    {
        return lastName;
    }
    string getFirstName()
    {
        return firstName;
    }
    string getAddress()
    {
        return address;
    }
    string getCity()
    {
        return city;
    }
    string getState()
    {
        return state;
    }
    string getZip()
    {
        return zip;
    }
    string getPhone()
    {
        return phone;
    }
};

class CustomerData:public PersonData
{
    private:
        int customerNumber;
        bool mailingList;

    public:


    int getMailingList()
    {
        return mailingList;
    }
    int getCustomerNumber()
    {
        return customerNumber;
    }

    void setCustomerNumber(int cn)
    {
        customerNumber=cn;
    }
    void setMailingList(int m)
    {

        if (m == 1)
        {
            mailingList = true;
        }else
            mailingList = false;

    }

};

class PreferredCustomer:public CustomerData
{
private:
    double purchasesAmount, discountLevel;
public:
    PreferredCustomer()
    {
        purchasesAmount = 0;
        discountLevel= 0;
    }
    double getPurchasesAmount()
    {
        return purchasesAmount;
    }

    double getDiscountLever()
    {
        return discountLevel;
    }

   /* void setPurchasesAmount(double pa)
    {
        purchasesAmount=pa;
    }

    void setDiscountLever(double dl)
    {
        discountLevel=dl;
    }*/

    PreferredCustomer (double p)
    {
        purchasesAmount = p;

        if (p >= 500 && p < 1000)
        {
            discountLevel = 0.05;
            cout << "Payment: " << p-(p*discountLevel) <<endl;
        }
        else if (p < 500)
        {
            discountLevel = 0;
            cout << "Payment: " << p-(p*discountLevel) <<endl;
        }
        else if (p >= 1000 && p < 1500)
        {
            discountLevel = 0.06;
            cout << "Payment: " << p-(p*discountLevel) <<endl;
        }
        else if (p >= 1500 && p < 2000)
        {
            discountLevel = 0.07;
            cout << "Payment: " << p-(p*discountLevel) <<endl;
        }
        else if (p >= 2000)
        {
            discountLevel = 0.10;
            cout << "Payment: " << p-(p*discountLevel) <<endl;
        }else
        {
            cout << "Negative input unaccepted ";
           // exit(0);
        }
    }
};


int main()
{   string a;;
    int customerNumber;
    int ml;
    double amount;

    CustomerData print;

    cout << "Last Name: ";
    getline(cin, a);
    print.setLastName(a);

    cout << "First Name: ";
    getline(cin, a);
    print.setFirstName(a);

    cout <<"Address: ";
    getline(cin, a);
    print.setAddress(a);

    cout << "City: ";
    getline(cin, a);
    print.setCity(a);

    cout <<"State: ";
    getline(cin, a);
    print.setState(a);

    cout << "Zip code: ";
    getline(cin, a);
    print.setZip(a);

    cout << "Phone: ";
    getline(cin, a);
    print.setPhone(a);

    cout << "Customer Number: ";
    cin>>customerNumber;
    print.setCustomerNumber(customerNumber);

    cout<<"Do you wish to be in the mailing list? (1 for yes/ 2 for no) ";
    cin>>ml;
    print.setMailingList(ml);

    cout<<endl;

    cout << "Name           : " << print.getFirstName() << " " << print.getLastName() << endl;
    cout << "Address        : " << print.getAddress() << endl;
    cout << "City           : " << print.getCity() <<endl;
    cout << "State          : " << print.getState() << endl;
    cout << "ZIP code       : " << print.getZip() << endl;
    cout << "Phone number   : " << print.getPhone() << endl;
    cout << "Customer number: " << print.getCustomerNumber() << endl;

    if (print.getMailingList())
    {
        cout << "You are in the mailing list " << endl;
    }
    else
    {
        cout << "You are not in the mailing list " << endl;
    }

    cout << "Total amount spent" << endl;
    cin >> amount;


    PreferredCustomer test;
    test.PreferredCustomer(amount);
    return 0;
}
