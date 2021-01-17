#include <iostream>

using namespace std;

class Point {
private:
    int* x, * y;
public:
    Point() {};
    Point(int _x = 0, int _y = 0) : x(new int(_x)), y(new int(_y)) {};
    friend ostream& operator<<(ostream& out, const Point& point) {
        out << *(point.x) << " " << *(point.y);
        return out;
    };
    friend istream& operator>>(istream& in, const Point& point) {
        in >> *(point.x) >> *(point.y);
        return in;
    };
    friend Point operator+(const Point& a, const Point& b) {
        return Point(*(a.x) + *(b.x), *(a.y) + (*b.y));
    };
    Point operator+(const int number) {
        return Point(*x + number, *y + number);
    };
};

int main()
{
    Point p1(-1, 2), p2(2, 2);
    int number;
    cin >> p1 >> p2 >> number;
    cout << p1 + p2 + number << endl;
    return 0;
}


