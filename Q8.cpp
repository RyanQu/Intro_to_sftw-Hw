#include "iostream"
using namespace std;

int main(){
    cout << "integer\tsquare\tcube" << endl;
    for (int i=0;i<=10;i++){
        cout<<i<<'\t'<<i*i<<'\t'<< i*i*i<< endl;
    }
    return 0;
}