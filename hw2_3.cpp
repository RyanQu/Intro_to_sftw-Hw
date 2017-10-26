// Homework 2, Q3
#include "iostream"
using namespace std;

void setTest(char **setPointer){
    int x;
    cin>>x;
    if (x<0){
        *setPointer="negative";
    }else{
        *setPointer="nonnegative";
    }
    cout<<*setPointer;
    cout<<"\n";
    cout<<"Homework 2 q3";
}

int main(){
    char *setPointer="a";
    setTest(&setPointer);
    return 0;
}

