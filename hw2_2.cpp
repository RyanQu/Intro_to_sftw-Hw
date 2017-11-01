// Homework 2, Q2
#include "iostream"
using namespace std;

void test(const char *test="\n", const int n=1){
    for (int i=0;i<n;++i){
        cout << test;
    }
}

int main(){
    //char *x = new char[16];
    char *x;
    int n;
    cout<<"Please input the content:";
    cin>>x;
    cout<<"Please input the number:";
    cin>>n;
    test(x,n);
    return 0;
}

