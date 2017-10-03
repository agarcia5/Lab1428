#include <iostream>

using namespace std;

int main()
{
    double tip, bill, total;

    cout << "Enter a tip amount in decimal form (EX: .08 = 8%)" << endl;
    cin >> tip;

    cout << "What is the amount of the bill " << endl;
    cin >> bill;

    total = (bill*tip);

    cout << "The tip is " << total << endl;





    return 0;
}
