#include "iostream"
#include "string"
using namespace std;

/* 
    use string write a program that has only main function. 
    The program takes in a user input of string type. 
    1) return user inputted string and displays the last five characters. 
    2) Input again, now the user entered a sentence that contains word “RBS”, 
        let user know the position of the word appeared. 
    3) Input again, now the program combines the input from the first time 
        and the last time and displays.
*/

int main(){
    string str, temp;

    cout<<"Input a string: ";
    cin>>str;
    temp=str;
    int n=str.length();
    if(n>5){
        cout<< "The last five chars is: "<<str.substr(n-5)<<endl;
    }else{
        cout<< "Less than five chars. "<<endl;
        cout<< "The last "<<n<<" chars is: "<<str<<endl;
    }

    cout<<"Input a string: ";
    cin>>str;
    n=str.length();
    for(int i=0;i<n-2;i++){
        if((str[i]=='R')&&(str[i+1]=='B')&&(str[i+2]=='S')){
            cout<< "RBS appear in: "<<i<<endl;
            i+=2;
        }
    }
    // cout<< "RBS appear in: "<<str.find("RBS")<<endl;

    cout<<"Input a string: ";
    cin>>str;
    temp+=str;
    cout<<temp<<endl;
    return 0;
}

