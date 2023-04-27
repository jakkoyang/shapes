#include "circle.h"

#include <iostream>
#include <cmath>
#include <math.h>
#include <vector>

using namespace std;

Circle::Circle(Point center, int radius){
    this->center = center;
    this->radius = radius;
}

const vector<Point> Circle::getPoints() const{
    int x0 = center.getX();
    int y0 = center.getY();
    int x = 0;
    int y = radius;
    int error = 1 - radius;

    vector<Point> points;

    do {
        // ADD POINT (x0 + x, y0 + y)
        // ADD POINT (x0 + y, y0 + x)
        // ADD POINT (x0 - y, y0 + x)
        // ADD POINT (x0 - x, y0 + y)
        // ADD POINT (x0 - x, y0 - y)
        // ADD POINT (x0 - y, y0 - x)
        // ADD POINT (x0 + y, y0 - x)
        // ADD POINT (x0 + x, y0 - y)

        points.push_back(Point(x0 + x, y0 + y));
        points.push_back(Point(x0 + y, y0 + x));
        points.push_back(Point(x0 - y, y0 + x));
        points.push_back(Point(x0 - x, y0 + y));
        points.push_back(Point(x0 - x, y0 - y));
        points.push_back(Point(x0 - y, y0 - x));
        points.push_back(Point(x0 + y, y0 - x));
        points.push_back(Point(x0 + x, y0 - y));

        if (error < 0) {
            error += (2 * x) + 1;
        } else {
            y--;
            error += (2 * x) - (2 * y) + 1;
        }
        x++;
    } while (y > x);
    return points;
}

float Circle::getArea() const{
    float area = 3.14 * radius * radius;
    return area;
}