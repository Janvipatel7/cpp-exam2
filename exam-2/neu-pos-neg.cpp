#include<iostream>

using namespace std;

int main(){
    int a;

    cout << "Enter any Number : ";
    cin >> a;
    
    if(a == 0){
        cout << " Netural Value !";
    }
    else if(a > 0){
        cout << "Positive Value.";
    }
    else {
        cout << "Negative Value";
    }

    return 0;
     
}