#include<iostream>

using namespace std;

int main(){

    int n1, n2, choice;

    cout << "enter your 1 addition\n enter your 2 subtraction\n enter 3 multiplication\n enter your 4 division\n enter your 5 invalid arithmetic opreation ";
    
    cout << " enter the number n1 : ";
    cin >> n1;

    cout << " enter the number n2 : ";
    cin >> n2;

    cout << " enter your choice : ";
    cin >> choice;

    if (choice == 1){
        cout << " Addition of two value := " << n1 + n2;
    }
    else if(choice == 2){
        cout << " Subtraction of two value := " << n1 - n2;
    }
    else if(choice == 3){
        cout << " Multiplication of two value := " << n1 * n2;
    }
    else if(choice == 4){
        cout << " division of two value := " << n1 / n2;
    }
    else
    {
        cout << " invalide arithmetic opreation !";
    }
    return 0;

}