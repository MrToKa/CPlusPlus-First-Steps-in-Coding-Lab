#include <iostream>
using namespace std;

int main()
{
    int dogFood, catFood;

    cin >> dogFood;
    cin >> catFood;

    double dogFoodPrice = dogFood * 2.5;
    double catFoodPrice = catFood * 4.0;

    double totalPrice = dogFoodPrice + catFoodPrice;

    cout << totalPrice << " lv.";
}
