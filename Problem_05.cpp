// To write a program to categorize employees based on designation using
// static data members.

// Algorithm:

// 1. Start
// 2. Create a class for employee with two count variables declaring as a static
//    member and employee id, name and designation as other data members.
// 3. Get the employee id name and designation from the user.
// 4. If the designation is MANAGER increment first count by 1 and if it is
//    ENGINEER increment second count by 1.
// 5. Finally display the total number of managers, engineers and employees.
// 6. Stop.

#include <iostream>
#include <string>
// #include<cstring>
// #include<string.h>
using namespace std;
class EMPLOYEE
{
    static int managerCount, engineerCount;
    int emp_id;
    string emp_Name;
    string designation;

public:
    void getInfo()
    {
        cout << "Enter employee Id: ";
        cin >> emp_id;
        cout << "Enter employee Name: ";
        cin >> emp_Name;
        cout << "Enter Designation: ";
        cin >> designation;
    }

    void Process()
    {
        if (designation == "Manager")
        {
            managerCount++;
        }
        else if (designation == "Engineer")
        {
            engineerCount++;
        }
    }

    void show()
    {
        cout << "\nNo of Managers: " << managerCount << endl;
        cout << "No of Engineers: " << engineerCount << endl;
    }
};

int EMPLOYEE::engineerCount = 0;
int EMPLOYEE::managerCount = 0;

int main()
{
    EMPLOYEE *e;
    int n;
    cout << "Enter the number of Employee: ";
    cin >> n;
    e = new EMPLOYEE[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter the data of Employee no. " << i + 1 << endl;
        e[i].getInfo();
        e[i].Process();
    }
    e[n - 1].show();
    return 0;
}
