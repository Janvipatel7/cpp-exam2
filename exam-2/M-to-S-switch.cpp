#include<iostream>

using namespace std;

int main(){
    
    int n;

    cout << "enter any number : ";
    cin >> n;

    switch(n){
        case 1:
        cout << "it's Monday !";
        break;
        case 2:
        cout << "it's Tuseday !";
        break;
        case 3:
        cout << "it's Wednesday !";
        break;
        case 4:
        cout << "it's Thursday !";
        break;
        case 5:
        cout << "it's Friday !";
        break;
        case 6:
        cout << "it's Saturday !";
        break;
        case 7:
        cout << "it's Sunday !";
        break;
        default:
        cout <<"khotuuuuuu chee re ....";
        return 0;       
    }
}