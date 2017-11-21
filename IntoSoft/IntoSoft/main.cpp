//
//  main.cpp
//  IntoSoft
//
//  Created by RyanQu on 2017/9/7.
//  Copyright © 2017年 RyanQu. All rights reserved.
//

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>

#include "std_lib_facilities.h"
#include <math.h>
#include <map>

int name_1(){
    cout << "please enter your first and second names\n";
    string first;
    string second;
    cin >> first >> second;             // read two strings
    string name = first + ' ' + second;	// concatenate strings
    // separated by a space
    cout << "Hello, "<< name << '\n';
    return 0;
}

int name_age_1(){
    cout << "please enter your first name and age\n";
    string first_name;          // string variable
    int age;                    // integer variable
    cin >> first_name >> age;	// read
    cout << "Hello, " << first_name << " age " << age << '\n';
    return 0;
}

int floating_1(){
    cout << "please enter a floating-point number: "; // prompt for a number
    double n;                              // floating-point variable
    cin >> n;
    cout << "n == " << n
    << "\nn+1 == " << n+1		           // '\n' means “a newline”
    << "\nthree times n == " << 3*n
    << "\ntwice n == " << n+n
    << "\nn squared == " << n*n
    << "\nhalf of n == " << n/2
    << "\nsquare root of n == " << sqrt(n) // library function
    << '\n';
    return 0;
}

int cm2inch_1(){
    const double cm2inch = 2.54; // number of centimeters per inch
    int length = 1;		         // length in inches
    while (length != 0) 		 // length == 0 is used to exit the program
    { 	// a compound statement (a block)
        cout << "Please enter a length in inches: ";
        cin >> length;
        cout << length << "in.  = " << cm2inch*length << "cm.\n";
    }
    return 0;
}

void cm2inch2_1(){
    const double cm2inch = 2.54;
    int val;
    char unit;
    cout << "Plese input a int and a char 'i' or 'c':";
    while (cin >> val >> unit) {	// keep reading
        if (unit == 'i')		// 'i' for inch
            cout << val << "in == " << val*cm2inch << "cm\n";
        else if (unit == 'c')	// 'c' for cm
            cout << val << "cm == " << val/cm2inch << "in\n";
        else
            break;	// terminate on a “bad unit”, e.g. 'q'
        cout << "Plese input a int and a char 'i' or 'c':";
    }
}

int violent_2(){
    int a = 20000;
    char c = a;
    int b = c;
    if (a != b)
        cout << "oops!: " << a << "!=" << b << '\n';
    else
        cout << "Wow! We have large characters\n";
    return 0;
}

int cast_2()
{
    char symbol{' '}; // char read from user
    
    cout << "Enter a character: "; // prompt user for data
    cin >> symbol; // read the character from the keyboard
    
    cout << symbol << "'s integer equivalent is "
    << static_cast<int>(symbol) << endl;
    return 0;
}

int square(int n) // return the square of x
{
    cout << n << '\t' << pow(n,2) << '\t' << pow(n,3) << '\n';
    return 0;
}
int square_2()
{
    int n;
    cout << "Please input an integer:" << endl;
    cin >> n;
    cout << "integer\tsquare\tcube" << endl;
    square(n);
    return 0;
}

int vectors_2()
{
    vector<double> temps;     // temperatures in Fahrenheit, e.g. 64.6
    double temp;
    while (cin>>temp)  temps.push_back(temp); // read and put into vector
    
    double sum = 0;
    for (int i = 0; i< temps.size(); ++i) sum += temps[i];  // sums temperatures
    
    cout << "Mean temperature: " << sum/temps.size() << '\n';
    sort(temps);    // from std_lib_facilities.h
    // or sort(temps.begin(), temps.end();
    cout << "Median temperature: " << temps[temps.size()/2] << '\n';
    return 0;
}

int words_list_3(){
    vector<string>words;
    vector<string>words_1; //for copy from words, clear, and find duplication
    string word;
    
    cout << "Please enter some words(input RBS to exit): " << endl;
    
    while (cin >> word && word != "RBS") {
        if (word=="NULL") error("null value!"); //Input "NULL" will error
        //if (word==!cin); there is no EOF in MacOX, control+D is not work
        words.push_back(word);
        cout << "Pushing " << word << " into vector words."<< endl;
    }
    
    cout << "Vector words before sorting: " << endl;
    
    for(int i=0;i<words.size();i++) {
        cout << "words " << i << " has:" << words[i] << endl;
    }
    
    sort(words); // Upper case will show first
    cout << "Sorted!" << endl;
    cout << "Total number of words inputed: " << words.size() << endl;
    cout << "Vector words after sorting: " << endl;
    
    //print sorted words
    for (int j = 0; j<words.size(); j++) {
        cout << "words " << j << " has: " << words[j] << endl;
    }
    
    //print new vector
    for (int k = 0; k<words.size(); k++) {
        words_1.push_back(words[k]);
        cout << "words_1 " << k << " has: " << words[k] << endl;
    }
    
    //find duplication
    words_1.clear(); //release the space and start to find duplication
    if (words.size() > 0){
        words_1.push_back(words[0]);
        cout << "Found new words: " << words[0] << endl;
        for (int i = 1; i<words.size();i++){
            if (words[i - 1] != words[i]) {
                cout << "Found new words:" << words[i] << endl;
                words_1.push_back(words[i]);
            }
            else {
                cout << "Found duplications:" << words[i] << endl;
            }
        }
    }
    cout << "found " << int(words.size() - words_1.size()) << " duplications" << endl;
    for (string word : words_1) {
        cout << word << endl;
    }
    return 0;
}

int raiseToPower(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i = i + 1) {
        result = result * base;
    }
    return result;
}

int threeExpFour_3() {
    int threeExpFour = raiseToPower(3, 4);
    cout << "3^4 is " << threeExpFour << endl;
    return 0;
}

void printNumberIfEven(int num) {
    if (num % 2 == 1) {
        cout << "odd number" << endl;
        return;
    }
    cout << "even number; number is " << num << endl;
}

int printEven_3() {
    int x = 4;
    printNumberIfEven(x);
    // even number; number is 3
    int y = 5;
    printNumberIfEven(y);
    return 0;
}

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return fibonacci(n-2) + fibonacci(n-1);
    }
}
void starLeft(){
    cout << "Input the number of stars you want to draw:";
    int n;
    if(!(cin >> n)){
        cin.clear();
        cin.sync();
        cout << "Not a number!\n";
        //error("Not a number!");
        n = 0;
    }
    int i = 1;
    while (i <= n){
        int j = 1;
        while (j <= i){
            cout << "*";
            ++j;
        }
        cout << "\n";
        ++i;
    }
    cout << "Choose to print from (L)left or (R)right side or (Q)quit:";
}

void starRight(){
    cout << "Input the number of stars you want to draw:";
    int m;
    if(!(cin >> m)){
        cin.clear();
        cin.sync();
        cout << "Not a number!\n";
        m = 0;
        // error("Not a number!")
    }
    int i = m;
    while (i >= 1){
        int j = 1;
        while (j < i){
            cout << " ";
            j++;
        }
        int k=m;
        while (k >= i){
            cout << "*";
            k--;
        }
        cout << "\n";
        i--;
    }
    cout << "Choose to print from (L)left or (R)right side or (Q)quit:";
}
int star(){
    char unit;
    int num;
    cout << "Choose to print from (L)left or (R)right side or (Q)quit:";
    
    cin >> unit;
    //if case
//    while (1) {
//        if (unit == 'L' || unit == 'l') {
//            starLeft();
//        }else if (unit == 'R' || unit == 'r') {
//            starRight();
//        }else if (unit == 'Q' || unit == 'q') {
//            break;
//        }else {
//            cout << "You input wrong choice" << "\n";
//            cout << "Choose to print from (L)left or (R)right side or (Q)quit:";
//        }
//        cin.ignore();
//        cin >> unit;
//    }
    
//    map<char,int> mapS;
//    mapS.insert(map<char, int>::value_type('L', 1));
//    mapS.insert(map<char, int>::value_type('l', 2));
//    mapS.insert(map<char, int>::value_type('R', 3));
//    mapS.insert(map<char, int>::value_type('r', 4));
    
    //swith case
    while(1){
//        map<char,int>::iterator l_it;
//        l_it=mapS.find(unit);
//        if(l_it==mapS.end()){
//            num=0;
//        }else{
//            num=mapS[unit];
//        }
        switch(unit){
            case 'l':;
            case 'L':
                starLeft();
                break;
            case 'r':;
            case 'R':
                starRight();
                break;
            default:
                cout << "You input wrong choice" << "\n";
                cout << "Choose to print from (L)left or (R)right side or (Q)quit:";
        }
        cin.ignore();
        cin >> unit;
        if (unit=='Q' || unit=='q' ){
            break;
        }
    }
    
    return 0;
}
int psqr(int *p){
    return *p * *p;
}
void midterm1(){
    int x=3;
    cout << psqr(&x);
}
struct {
    int month;
    int day;
    int year;
}DayofBirth;

struct bday{
    int month;
    int day;
    int year;
} ;

int main(){
    //name_1();
    //name_age_1();
    //floating_1();
    //cm2inch_1();
    //cm2inch2_1();
    //violent_2();
    //cast_2();
    //square_2();
    //vectors_2();
    //words_list_3(); //sample input: This is a test and it is a test only RBS
    //threeExpFour_3();
    //printEven_3();
    //fibonacci(10);
    //star();
    //midterm1();
    DayofBirth.month=12;
    DayofBirth.day=8;
    DayofBirth.year=1994;
    DayofBirth = {12,8,1994};
    struct bday gwt = {1,4,1995};
    cout << DayofBirth.month << "/" << DayofBirth.day << "/"<< DayofBirth.year <<endl;
    cout << gwt.month << "/" << gwt.day << "/"<< gwt.year <<endl;
    bool x = true;
    cout << x;
    
    int a =7;
    int *apt=&a;
    cout<<*apt<<endl<<a<<endl<<apt<<endl<<&a;
    
    return 0;
}


