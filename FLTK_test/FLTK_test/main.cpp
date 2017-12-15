//
//  main.cpp
//  FLTK_test
//
//  Created by RyanQu on 2017/11/28.
//  Copyright © 2017年 RyanQu. All rights reserved.
//

#include "Simple_window.h"    // if we want that "Next" button
#include "Graph.h"
#include "std_lib_facilities.h"

using namespace Graph_lib;

int main(){
    Point o(100,100);
    Simple_window win(o, 600, 400, "ISD_FINAL");
    Polygon tri;
    tri.add(Point(400,100));
    tri.add(Point(350,200));
    tri.add(Point(450,200));
    tri.set_fill_color(Color::red);
    tri.set_style(Line_style::dash);
    win.attach(tri);
    
    Polygon rec;
    rec.add(Point(200,150));
    rec.add(Point(300,150));
    rec.add(Point(300,200));
    rec.add(Point(200,200));
    rec.set_fill_color(Color::yellow);
    win.attach(rec);
    
    win.wait_for_button();
    return 0;
}
