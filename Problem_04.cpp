// Program: Given that an EMPLOYEE class contains following members:
// data members: Employee number, Employee name, Basic, DA, IT, Net Salary
// and print data members. Write a C++ program to read the data of N employee
// and compute Net salary of each employee (DA=52% of Basic and Income Tax
// (IT) =30% of the gross salary) 

#include<iostream>
using namespace std;
class EMPLOYEE{
    private:
        int emp_number;
        string emp_name;
        float Basic,Net_Salary;

    public:
        void getInput()
        {
            cout<<"Enter Employee Number: "<<endl;
            cin>>emp_number;
            cout<<"Enter Employee Name: "<<endl;
            cin>>emp_name;
            cout<<"Enter Basic Salary: "<<endl;
            cin>>Basic;
        }    

        void showData()
        {
            cout<<"-----------------------------------"<<endl;
            cout<<"Employee Name: "<<emp_name<<endl;
            cout<<"Net Salary: "<<Net_Salary<<endl;
            cout<<"-----------------------------------"<<endl;
        }

        void calculate();
};

void EMPLOYEE :: calculate()
{
    float DA =0.52,IT = 0.32;
    float grossSalary = Basic + (DA * Basic);
    Net_Salary = grossSalary - (IT * grossSalary);
}

int main()
{
    int n;
    cout<<"Enter the number of Employee: ";
    cin>>n;
    EMPLOYEE e[50];
    for(int i = 0;i<n;i++)
    {
        e[i].getInput();
        e[i].calculate();
    }
    for(int i = 0;i<n;i++)
    {
        e[i].showData();
    }
    return 0;
}