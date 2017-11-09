#include "iostream"
#include "Account.h"
using namespace std;

int main(){
    Account ac1("Amy",0);
    Account ac2("Bob",10);
    Account ac3("Chan",100);
    ac1.display();
    ac2.display();
    ac3.display();
    int x;
    cout<<"Please choose one Account: ";
    while (cin>>x){
        double amout;
        char op;
        if (x==1){
            cout << "Please choose the operations for Account 1, d or w: ";
            cin>>op;
            if(op=='d'){
                cout << "Please input the number of deposit for Account 1: ";
                cin >> amout;
                ac1.deposit(amout);
            }else if(op=='w'){
                cout << "Please input the number of withdraw for Account 1: ";
                cin >> amout;
                ac1.withdraw(amout);
            }  
        }
        else if (x==2){
            cout << "Please choose the operations for Account 2, d or w: ";
            cin>>op;
            if(op=='d'){
                cout << "Please input the number of deposit for Account 2: ";
                cin >> amout;
                ac2.deposit(amout);
            }else if(op=='w'){
                cout << "Please input the number of withdraw for Account 2: ";
                cin >> amout;
                ac2.withdraw(amout);
            }  
        }
        else if (x==3){
            cout << "Please choose the operations for Account 3, d or w: ";
            cin>>op;
            if(op=='d'){
                cout << "Please input the number of deposit for Account 3: ";
                cin >> amout;
                ac3.deposit(amout);
            }else if(op=='w'){
                cout << "Please input the number of withdraw for Account 3: ";
                cin >> amout;
                ac3.withdraw(amout);
            }  
        }
        else{
            cout<<"No such Account!"<<endl;
        }
        cout<<"Please choose one Account: ";
    }
    
    ac1.display();
    ac2.display();
    ac3.display();
    return 0;
}

