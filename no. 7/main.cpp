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
    void setCustomerNumber(int cn)
    {
        customerNumber = cn;
    }
    void setMailingList(int ml)
    {
        if (ml == 1)
        {
            mailingList = true;
        }else {
            mailingList = false;
        }
    }

    int getMailingList()
    {
        return mailingList;
    }
    int getCustomerNumber()
    {
        return customerNumber;
    }


};
int main()
{   string lastName, firstName, address;
    string city, state, zip, phone, customerNumber;
    int ml;
    CustomerData print;

    cout << "Last Name: ";
    getline(cin, lastName);
    cout << "First Name: ";
    getline(cin, firstName);
    cout <<"Address: ";
    getline(cin, address);
    cout << "City: ";
    getline(cin, city);
    cout <<"State: ";
    getline(cin, state);
    cout << "Zip code: ";
    getline(cin, zip);
    cout << "Phone: ";
    getline(cin, phone);
    cout << "Customer Number: ";
    getline(cin, customerNumber);

    cout<<"Do you wish to be in the mailing list? (1 for yes/ 2 for no)";
    getline(cin, ml);

    print.setLastName(lastName);
    print.setFirstName(firstName);
    print.setAddress(address);
    print.setCity(city);
    print.setState(state);
    print.setZip(zip);
    print.setPhone(phone);
    print.setMailingList(ml);

    cout << "Name: " << print.getFirstName() << " " << print.getLastName() << endl;
    cout << "Address: " << print.getAddress() << endl;
    cout << "City: " << print.getCity() <<endl;
    cout << "State: " << print.getState() << endl;
    cout << "ZIP code: " << print.getZip() << endl;
    cout << "Phone number: " << print.getPhone() << endl;
    cout << "Customer number: " << print.getCustomerNumber() << endl;

    if (print.getMailingList())
    {
        cout << "You are in the mailing list " << endl;
    }
    else
    {
        cout << "You are not in the mailing list " << endl;
    }

    return 0;
}
