include "std_lib_facilities.h"

void starLeftTriangle(int n);
void starRightTriangle(int m);

int main()
{
    int star;
    char unit;
    cout << "Choose to print from (L)left or (R)right side or (Q)quit:";

    while (cin >> unit) {
        if (unit == 'L' || 'l') {
            cout << "Input the number of stars you want to draw:";
            cin >> star;
            starLeftTriangle(star);
            cout << "Choose to print from (L)left or (R)right side or (Q)quit:";
        }
        else if (unit == 'R' || 'r') {
            cout << "Input the number of stars you want to draw:";
            cin >> star;
            starRightTriangle(star);
            cout << "Choose to print from (L)left or (R)right side or (Q)quit:";
        }
        else if (unit == 'Q' || 'q') {
            break;
        }
        else {
            cout << "You input wrong choice" << "\n";
            cout << "Choose to print from (L)left or (R)right side or (Q)quit:";
        }
    }

    return 0;
}

void starLeftTriangle(int n){
    int i = 1, j = 1;
    while (i <= n){
        while (j <= i){
            cout << "*";
            ++j;
        }
        cout << "\n";
        ++i;
    }
}

void starRightTriangle(int m){
    int i = m, j = 1, k = m;
    while (i >= 1){
        while (j < i){
            cout << " ";
            j++;
        }
        while (k >= i){
            cout << "*";
            k--;
        }
        cout << "\n";
        i--;
    }
}