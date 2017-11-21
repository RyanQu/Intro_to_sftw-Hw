//
//  chapter.12.7.cpp
//  FLTK_test
//
//  Created by RyanQu on 2017/11/16.
//  Copyright © 2017年 RyanQu. All rights reserved.
//


//
// This is example code from Chapter 12.7.10 "And much more" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
//

#include "Simple_window.h"    // if we want that "Next" button
#include "Graph.h"
#include "std_lib_facilities.h"

using namespace Graph_lib;

//------------------------------------------------------------------------------

int main ()
try
{
    Point tl(100,100);    // top-left corner of our window
    
    Simple_window win(tl,960,780,"Canvas");
    // screen coordinate tl for top-left corner
    // window size(600*400)
    // title: Canvas
    
    Axis xa(Axis::x, Point(20,300), 280, 10, "x axis"); // make an Axis
    // an axis is a kind of Shape
    // Axis::x means horizontal
    // starting at (20,300)
    // 280 pixels long
    // 10 "notches"
    // label the axis "x axis"
    win.attach(xa);                      // attach xa to the window, win
    
    Axis ya(Axis::y, Point(20,300), 280, 10, "y axis");
    ya.set_color(Color::cyan);           // choose a color
    ya.label.set_color(Color::dark_red); // choose a color for the text
    win.attach(ya);
    
    Function sine(sin,0,100,Point(20,150),1000,50,50);    // sine curve
    // plot sin() in the range [0:100) with (0,0) at (20,150)
    // using 1000 points; scale x values *50, scale y values *50
    win.attach(sine);
    sine.set_color(Color::blue);         // we changed our mind about sine's color
    
    Graph_lib::Polygon poly;                        // a polygon, a Polygon is a kind of Shape
    poly.add(Point(750,350));            // three points makes a triangle
    poly.add(Point(800,250));
    poly.add(Point(850,350));
    
    poly.set_color(Color::red);
    poly.set_style(Line_style::dash);
    win.attach(poly);
    
    Graph_lib::Rectangle r(Point(300,350), 100, 50);// top-left corner, width, height
    win.attach(r);
    
    Closed_polyline poly_rect;
    poly_rect.add(Point(100,350));
    poly_rect.add(Point(200,350));
    poly_rect.add(Point(200,400));
    poly_rect.add(Point(100,400));
    poly_rect.add(Point(50,375));
    win.attach(poly_rect);
    
    r.set_fill_color(Color::yellow);     // color the inside of the rectangle
    poly.set_style(Line_style(Line_style::dash,4));
    poly_rect.set_style(Line_style(Line_style::dash,2));
    poly_rect.set_fill_color(Color::green);
    
    Text t(Point(150,650), "Hello, graphical world! ");
    win.attach(t);
    t.set_font(Font::times_bold);
    t.set_font_size(20);
    
    Image ii(Point(300,300),"/Users/RyanQu/Documents/Workspace/Git/Intro_to_sftw-Hw/FLTK_test/FLTK_test/image.jpg"); // 400*212 pixel jpg
    win.attach(ii);
    ii.move(100,200);
    
    Circle c(Point(100,500),50);
    Graph_lib::Ellipse e(Point(250,500), 75,25);
    e.set_color(Color::dark_red);
    Mark m(Point(100,500),'x');
    Mark p(Point(250,500),'x');
    
    ostringstream oss;
    oss << "screen size: " << x_max() << "*" << y_max()
    << "; window size: " << win.x_max() << "*" << win.y_max();
    Text sizes(Point(100,20),oss.str());
    
    Image cal(Point(460,225),"/Users/RyanQu/Documents/Workspace/Git/Intro_to_sftw-Hw/FLTK_test/FLTK_test/snow_cpp.gif"); // 320*240 pixel gif
    cal.set_mask(Point(40,40),200,150);       // display center part of image
    
    win.attach(c);
    win.attach(m);
    win.attach(p);
    win.attach(e);
    
    win.attach(sizes);
    win.attach(cal);
    
    win.set_label("Canvas #12");
    win.wait_for_button();               // Display!
}
catch(exception& e) {
    // some error reporting
    return 1;
}
catch(...) {
    // some more error reporting
    return 2;
}
    

