// Pointer
#include "iostream"
using namespace std;

int f(int &a){
    a=a+1;
    return a;
}
int g(int a){
    a=a+1;
    return a;
}

int h(int *a){
    *a = *a + 1;
    return *a;
}
int main(){
    int x = 10;
    int *a = &x;
    int b = x;
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<*a<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<&b<<endl;

    cout<<g(x)<<endl;
    cout<<x<<endl;

    cout<<f(x)<<endl;
    cout<<x<<endl;

    cout<<h(&x)<<endl;
    cout<<x<<endl;
    return 0;
}

