#include <iostream>
using namespace std;

class Point{
private:
    int x, y;
public:
    Point(int u=0, int v=0): x(u), y(v){}
    int getX() const;
    int getY() const;
    void setX(const int newx);
    void setY(const int newy);
    void printPoint() const;
};

int Point::getX() const{
    return x;
}
int Point::getY() const{
    return y;
}
void Point::setX(const int newx){
    x = newx;
}
void Point::setY(const int newy){
    y = newy;
}
void Point::printPoint() const{
    cout << "(x,y) = " << "(" << x << "," << y << ")" <<endl;
}
