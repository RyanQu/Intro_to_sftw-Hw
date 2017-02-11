#include "iostream"
using namespace std;
int main(){
    int n;
    cout << "Enter an integer: ";
    while(cin >> n){
        if(n==24) break; //When input is the birthday of Hongyuan Cao, then the program break.
        if (n < 10)
            cout << "less than 10" << endl;
        else if (n > 5)
            cout << "greater than 5" << endl;
        else
            cout << "not interesting" << endl;
        cout << "Enter an integer: ";
    }
}
