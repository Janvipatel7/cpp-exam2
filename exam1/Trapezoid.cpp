#include<iostream>

using namespace std;

int main(){

    int a , b , H , area;

    cout << "enter the value of a b and area : ";
    cin >> a >> b >> H;

    area = ((a + b) / 2 * H);

    cout << " area of Trapezoid  : " << area <<endl;

    return 0;

}