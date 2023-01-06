#include <iostream>
using namespace std;

int main()
{
	double yard;
	cin >> yard;

	double totalPrice = yard * 7.61;

	double discount = 0.18 * totalPrice;

	double endPrice = totalPrice - discount;

	cout << "The final price is: " << endPrice << " lv." << endl;
	cout << "The discount is: " << discount << " lv." << endl;
}
