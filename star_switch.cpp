/*
    Date: 2017.10.11
    Debug: RyQ
*/

//#include "std_lib_facilities.h" 
#include <iostream>
using namespace std;

void starLeft(){
    cout << "Input the number of stars you want to draw:"; 
    int n;
    if(!(cin >> n)){
        cin.clear(); 
        cin.sync();  
        cout << "Not a number!\n";
        n = 0;
    }
    int i = 1;
    while (i <= n){
        int j = 1; 
        while (j <= i){
            cout << "*";
            ++j; 
        }
        cout << "\n";
        ++i;
    }
    cout << "Choose to print from (L)left or (R)right side or (Q)quit:";
}

void starRight(){
    cout << "Input the number of stars you want to draw:"; 
    int m;
    if(!(cin >> m)){
        cin.clear(); 
        cin.sync();  
        cout << "Not a number!\n";
        m = 0;
    }
    int i = m;
    while (i >= 1){
        int j = 1; 
        while (j < i){
            cout << " ";
            j++;
        }
        int k=m; 
        while (k >= i){
            cout << "*";
            k--;
        }
        cout << "\n";
        i--;
    }
    cout << "Choose to print from (L)left or (R)right side or (Q)quit:";
}

int main(){
    int star;
    char unit;
    int num;
    cout << "Choose to print from (L)left or (R)right side or (Q)quit:";
    cin >> unit;           
    while (1) {
        switch(unit){
            case 'l':;
            case 'L':
                starLeft();
                break;
            case 'r':;
            case 'R':
                starRight();
                break;
            case 'q':;
            case 'Q': break;
            default:
                cout << "You input wrong choice" << "\n";
                cout << "Choose to print from (L)left or (R)right side or (Q)quit:";
        }
        if (unit=='q' || unit=='Q'){
            break;
        }
        cin.ignore();
        cin >> unit;
    }
    return 0;
}

