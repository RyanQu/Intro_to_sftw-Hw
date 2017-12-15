#include "iostream"
using namespace std;

class Final{
private:
    int x;
    int y;
public:
    Final(int u=0, int v=0): x(u), y(v){}
    int getX() const;
    int getY() const;
    void setX(const int newx);
    void setY(const int newy);
};
