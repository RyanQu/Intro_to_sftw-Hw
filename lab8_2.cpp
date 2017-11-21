#include "iostream"
#include "string"
using namespace std;

/* 
    covert the program above to a program with three functions. 
    The first function displays the last five characters of the inputted string. 
    The second function displays the position of word RBS. 
    You decide what type of calls should be used. 
    The third function combines two strings and output to the display.
*/

void last_five(string str){
    int n=str.length();
    if(n>5){
        cout<< "The last five chars is: "<<str.substr(n-5)<<endl;
    }else{
        cout<< "Less than five chars. "<<endl;
        cout<< "The last "<<n<<" chars is: "<<str<<endl;
    }
}

void find_RBS(){
    string str;
    cout<<"Input a string: ";
    cin>>str;
    int n=str.length();
    for(int i=0;i<n-2;i++){
        if((str[i]=='R')&&(str[i+1]=='B')&&(str[i+2]=='S')){
            cout<< "RBS appear in: "<<i<<endl;
            i+=2;
        }
    }
    // cout<< "RBS appear in: "<<str.find("RBS")<<endl;
}

void combines(string str){
    string str1;
    cout<<"Input a string: ";
    cin>>str1;
    str+=str1;
    cout<<str<<endl;
}

int main(){
    string str, temp;
    cout<<"Input a string: ";
    cin>>str;
    temp=str;
    last_five(str);
    find_RBS();
    combines(temp);
    return 0;
}

