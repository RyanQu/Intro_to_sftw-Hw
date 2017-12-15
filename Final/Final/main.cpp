//
//  main.cpp
//  Final
//
//  Created by RyanQu on 2017/12/14.
//  Copyright © 2017年 RyanQu. All rights reserved.
//

#include <iostream>
#include "final.h"
using namespace std;

int main() {
    Final pointer1;
    cout<<"initial value: ";
    cout<<pointer1.getX()<<","<<pointer1.getY()<<endl;
    cout<<"Type in values for x,y: ";
    int a,b;
    cin>>a>>b;
    pointer1.setX(a);
    pointer1.setY(b);
    cout<<"Update value: ";
    cout<<pointer1.getX()<<","<<pointer1.getY()<<endl;
    return 0;
    
}


