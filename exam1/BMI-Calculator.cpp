#include<iostream>

using namespace std;

int main(){

    float weight , height , bmi;

    cout << " enter the value of weight (kg) : ";
    cin >> weight;

    cout << " enter the value of height (m) : ";
    cin >> height;

    bmi = weight / (height * height);

    cout << " value of BMI : " << bmi << endl;

    return 0;
}