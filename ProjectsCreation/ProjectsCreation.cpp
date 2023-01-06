#include <iostream>
using namespace std;

int main()
{
    string name;
    int projects;

    cin >> name;
    cin >> projects;

    cout << "The architect " << name << " will need " << projects * 3 << " hours to complete " << projects << " project/s.";
}
