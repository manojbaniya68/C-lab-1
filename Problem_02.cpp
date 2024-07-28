// To find maximum and minimum anong three numnbers.
#include <iostream>
using namespace std;
class NUMBER
{
    int num1, num2, num3, max, min;

public:
    void getNumbers()
    {
        cout << "Enter any three numbers: " << endl;
        cin >> num1 >> num2 >> num3;
    }
    void showMaxMinNumber()
    {
        cout << "Maximum: " << max << " Minimum: " << min << endl;
    }
    void findMinMax()
    {
        max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
        min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);
    }

};
 int main()
{
    NUMBER n1;
    n1.getNumbers();
    n1.findMinMax();
    n1.showMaxMinNumber();
    return 0;
}