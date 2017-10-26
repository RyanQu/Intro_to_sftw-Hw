// Homework 2, Q2
#include "iostream"
using namespace std;

void test(char *test="\n", int n=1){
    for (int i=0;i<n;++i){
        cout << test;
    }
}

int main(){
    char *x;
    int n;
    cout<<"Please input the content:";
    cin>>x;
    cout<<"Please input the number:";
    cin>>n;
    test(x,n);
    return 0;
}

