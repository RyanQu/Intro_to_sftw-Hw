#include "iostream"
#include "studentacc.h"
#include "fstream"
using namespace std;

/*
Write a full program that uses the class StudentAccount to:
1) allow user to input: student name, student ID, account start balance, 
    and the percentage to withdraw. (positive values)
2) declare a StudentAccount object, studentGS, with the values user inputted.
3) use class StudentAccount member public function to deduct the amount by the percentage the user inputted.
4) use class StudentAccount member public function to display balance.
5) create a file and save all the info in that file.
*/

int main(){
    string s_name, s_id;
    double s_balance;

    cout << "Please input name: ";
    getline(cin, s_name);
    cout << "Please input id: ";
    cin >> s_id;
    cout << "Please input start balance: ";
    cin >> s_balance;

    StudentAccount studentGS(s_id,s_name,s_balance);

    cout<<studentGS.getID()<<endl;
    cout<<studentGS.getName()<<endl;
    cout<<studentGS.getBalance()<<endl;

    cout << "Percentage you want to deduct: ";
    float p;
    cin >> p;
    double w = studentGS.getBalance()*p;

    cout << p << " of withdraw amout is: "<<w<<endl;
    studentGS.charge(w);
    cout << "Current balance is: "<<studentGS.getBalance()<<endl;

    cout<<studentGS.getID()<<endl;
    cout<<studentGS.getName()<<endl;
    cout<<studentGS.getBalance()<<endl;

    cout << "Enter the filename you want to save: ";
    string path;
    cin>>path;

    ofstream outfile(path);
    outfile <<s_id<<"\t"<<s_name<<endl
            <<"Start balance: "<< s_balance<<endl
            <<p<<" of withdraw amout is: "<<w<<endl
            <<"Current balance: "<<studentGS.getBalance()<<endl;
    outfile.close();
    cout << "File "<<path<<" is saved."<<endl;
    
    return 0;
}

