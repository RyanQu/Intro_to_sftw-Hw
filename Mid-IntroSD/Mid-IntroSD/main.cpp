//
//  main.cpp
//  Mid-IntroSD
//
//  Created by RyanQu on 2017/10/19.
//  Copyright © 2017年 RyanQu. All rights reserved.
//

#include "std_lib_facilities.h"

//int main() {
//    int x;
//    cout << "please input a int: ";
//    cin >> x;
//    while(1){
//        switch(x){
//            case 1:
//                cout << "You entered 1" <<endl;
//                break;
//            case 2:
//            case 3:
//                cout << "You entered 2 or 3" <<endl;
//                break;
//            default:
//                cout << "You did not enter 1, 2, or 3" <<endl;
//        }
//        cout << "please input a int: ";
//        cin >> x;
//    }
//    return 0;
//}

//void printStar(int n){
//    for(int i=n;i>0;i--){
//        for(int j=0;j<i;j++){
//            cout << "*";
//        }
//        cout << endl;
//    }
//}
//
//int main(){
//    int n;
//    cout << "Please input an integer:";
//    cin >> n;
//    printStar(n);
//}

//#include <iostream>
//using namespace std;
//
//struct bday{
//    int month;
//    int day;
//    int year;
//} DayofBirth;
//
//int main(){
//    DayofBirth = {10,29,2017};
//    cout<< DayofBirth.month << "/"
//        << DayofBirth.day << "/"
//        << DayofBirth.year << endl;
//    return 0;
//}
void fib(int n){
    vector<unsigned long> temp;
    temp.push_back(0);
    temp.push_back(1);
    for(int i=0;i<=n;i++){
        if(i>1){
            temp.push_back(temp[i-1]+temp[i-2]);
        }
        cout << "Fibonacci(" << i << ")=" << temp[i] <<endl;
    }
}

int main(){
    int n;
    cout << "Please type in a number to calculate the Fibonacci number" <<endl;
    while(cin>>n){
        fib(n);
        cout << "Please type in a number to calculate the Fibonacci number" <<endl;
    }
    return 0;
}
