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
    Point tl(100,100);    // top-left corner of our window
    
    Simple_window win(tl,1024,768,"ISD-Yuan Qu");
    
    Axis x_axis(Axis::x, Point(20,300), 280, 10, "x axis");
    x_axis.set_color(Color::blue);
    Axis y_axis(Axis::y, Point(20,300), 280, 10, "y axis");
    y_axis.set_color(Color::cyan);
    y_axis.label.set_color(Color::dark_red);
    win.attach(x_axis);
    win.attach(y_axis);
    
    Function sine(sin,0,100,Point(20,150),1000,100,60);
    sine.set_color(Color::green);
    win.attach(sine);
    
    Polygon poly;
    poly.add(Point(750,350));
    poly.add(Point(800,250));
    poly.add(Point(850,350));
    poly.set_color(Color::blue);
    poly.set_style(Line_style(Line_style::dash,4));
    win.attach(poly);
    
    Rectangle rec(Point(300,350), 100, 50);
    rec.set_fill_color(Color::yellow);
    win.attach(rec);
    
    Closed_polyline poly_rect;
    poly_rect.add(Point(100,350));
    poly_rect.add(Point(200,350));
    poly_rect.add(Point(200,400));
    poly_rect.add(Point(100,400));
    poly_rect.add(Point(50,375));
    poly_rect.set_style(Line_style(Line_style::dash,2));
    poly_rect.set_fill_color(Color::green);
    win.attach(poly_rect);
    
    Text t(Point(150,650), "Hello, graphical world! ");
    t.set_font(Font::times_bold);
    t.set_font_size(20);
    win.attach(t);
    
    Image image1(Point(300,300),"/Users/RyanQu/Documents/Workspace/Git/Intro_to_sftw-Hw/FLTK_test/FLTK_test/image.jpg");
    image1.move(100,200);
    win.attach(image1);

    Circle c(Point(100,500),50);
    Mark m(Point(100,500),'x');
    Ellipse e(Point(250,500), 75,25);
    Mark p(Point(250,500),'x');
    e.set_color(Color::dark_red);
    win.attach(c);
    win.attach(m);
    win.attach(p);
    win.attach(e);
    
    Image cal(Point(460,225),"/Users/RyanQu/Documents/Workspace/Git/Intro_to_sftw-Hw/FLTK_test/FLTK_test/snow_cpp.gif"); 
    cal.set_mask(Point(40,40),200,150);
    win.attach(cal);
    
    ostringstream oss;
    oss << "screen size: " << x_max() << "*" << y_max()
    << "; window size: " << win.x_max() << "*" << win.y_max();
    
    Text sizes(Point(100,20),oss.str());
    win.attach(sizes);
    

    win.wait_for_button();
}
