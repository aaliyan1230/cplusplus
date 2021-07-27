#include <iostream>
#include <string>
using namespace std;

struct Date
{
    int year;
    string month;
    int day;

    void showdata()
    {
        cout << day << '-' << month << '-' << year << endl;
    }
};

struct Employee
{
    int empid;
    string name;
    int salary;
    Date joining_date;
};

int main()
{
    Date today[] = {2021, "April", 25};
    today->showdata();

    Employee aali[] = {20061, "Aaliyan", 200000, {2020, "October", 28}};
}
