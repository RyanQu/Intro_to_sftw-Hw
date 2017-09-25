// Purpose: to calculate the product of three integers.

#include "iostream"
using namespace std;

int main(){
    int x = 0;
    int y = 0;
    int z = 0;
    int result = 0;
    cout << "Enter 3 integers please: \n";
    cin>>x>>y>>z;
    result = x*y*z;
    cout<<"The product is "<<result;
    return 0;
}
