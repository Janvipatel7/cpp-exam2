#include<iostream>

using namespace std;

int main()
{
    int c;

    cout << "enter the value of celsious : ";
    cin >> c;

    cout << " converts temperature from degrees Celsius to Fahrenheit is : " << (1.8 * c) + 32;

    return 0;
}