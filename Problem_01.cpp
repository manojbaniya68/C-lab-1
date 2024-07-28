// To add two distances in feet and inches.
#include <iostream>
#include <string>
using namespace std;
class DISTANCE
{
    int feet, inches;

public:
    void getInputDistance()
    {
        cout << "Enter the distance in feet and inches: " << endl;
        cin >> feet >> inches;
    }
    void showAddedDistance()
    {
        cout << "Sum of this two distance is : " << feet << " feet and " << inches << " inches." << endl;
    }
    void addDistance(DISTANCE d1, DISTANCE d2)
    {
        int temp;
        temp = d1.inches + d2.inches + (d1.feet + d2.feet) * 12;
        this->feet = temp / 12;
        this->inches = temp % 12;
    }
};

int main()
{
    DISTANCE d1, d2, d3;
    d1.getInputDistance();
    d2.getInputDistance();
    d3.addDistance(d1, d2);
    d3.showAddedDistance();
    return 0;
}