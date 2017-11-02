// labwork 6
#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<int> &x){
    cout<<"The vecotr is: { ";
    for(int i=0;i<x.size()-1;i++) {
        cout << x[i] <<", ";
    }
    cout<<x[x.size()-1]<<" }"<<endl;
}

void reverse_vector(vector<int> &x){
    cout<<"Reverse the vecotr."<<endl;
    for(int i=0;i<x.size()/2;i++) {
        int temp=x[i];
        x[i]=x[x.size()-1-i];
        x[x.size()-1-i]=temp;
    }
	print_vector(x);
}

void swap_vector(vector<int> &x){
    cout<<"Reverse the vecotr by swap."<<endl;
    for(int i=0;i<x.size()/2;i++) {
        swap(x[i],x[x.size()-1-i]);
    }
	print_vector(x);
}

int main(){
    vector<int> nums;
    int num;
    cout<<"please input integer: ";
    while (cin >> num) {
        nums.push_back(num);
        cout << "Pushing " << num << " into vector nums."<< endl;
        cout<<"please input integer: ";
    }
    cout<<"\n";
    print_vector(nums);
    reverse_vector(nums);
    swap_vector(nums);
    return 0;
}

