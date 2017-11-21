#include "iostream"
#include "hw3_2.h"
#include "fstream"
using namespace std;

int main(){
    Point A;
    A.printPoint();
    cout << "Input new (x,y): ";
    int a,b;
    cin>>a>>b;
    A.setX(a);
    A.setY(b);
    A.printPoint();
    ofstream outfile("hw3_2.txt");
    outfile <<"User inputs: "<< a << " " << b <<endl;
    outfile.close();
    return 0;
}