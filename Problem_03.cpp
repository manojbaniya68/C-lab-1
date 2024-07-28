// Write a program that checks the order of a medicine from a pharmacy store.
// The program should read the order quantity and the medicine quantity in the
// store. When the order quantity is more than the store quantity, your
// program should display the message “No enough quantity”. When the order
// quantity is less than the store quantity, you have to check that the order
// quantity must be not more than 16 except there is more than 40 items in the
// store. The messages that will be displayed in that cases are “Your order is
// accepted” OR “You cannot order more than 16 item”

#include <iostream>
using namespace std;

class MedicineStore
{
public:
    int order_quantity, store_quantity;

    void getInfo()
    {
        cout << "Enter store quantity: ";
        cin >> store_quantity;

        cout << "Enter order quantity: ";
        cin >> order_quantity;
    }

    void process()
    {
        if (store_quantity < order_quantity)
        {
            cout << "No Enough Quantity.";
        }
        else if (store_quantity <= 40 && order_quantity > 16)
        {
            cout << "You cannot order more than 16 items.";
        }
        else
        {
            cout<<"Your order is accepted.";
        }        
    }
};
int main()
{
    MedicineStore s1;
    s1.getInfo();
    s1.process();
    return 0;
}