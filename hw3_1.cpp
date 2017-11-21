#include <iostream>
using namespace std;

// class Point{
// private:
//     int x, y;
// public:
//     Point (int u, int v) : x(u), y(v){}
//     int getX() {return x;}
//     int getY() {return y;}
// };

// int main(){
//     Point p(5,3);
//     cout << p.getX() << " " << p.getY() << "\n";
//     return 0;
// }

// class Point{
// private:
//     int x, y;

// public:
//     Point (int u, int v) : x(u), y(v) {}
//     int getX() const {return x;}
//     int getY() const {return y;}
//     void doubleVal(){
//         x*=2;
//         y*=2;
//     }
// };

// int main(){
//     const Point myPoint(5 ,3);
//     Point myPoint1(4, 2);
//     //myPoint.doubleVal(); error: Const instance cannot call non-const member function
//     cout << myPoint.getX() << " " << myPoint.getY() << "\n";
//     myPoint1.doubleVal(); // correct.
//     cout << myPoint1.getX() << " " << myPoint1.getY() << "\n";
//     return 0;
// }

class Point{
private:
    int x, y;

public:
    Point (int u,int v) : x(u), y(v) {};
    int getX() {return x;}
    int getY() {return y;}
    void setX(int newX) { x = newX; }
};

int main(){
    Point p(5,3);
    p.setX(9001);
    cout << p.getX() << ' ' << p.getY();
    return 0;
}