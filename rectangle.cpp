#include "line.h"
#include "rectangle.h"

#include <iostream>
#include <cmath>
#include <math.h>
#include <vector>

using namespace std;

Rectangle::Rectangle(Point p1, Point p2) : p1(p1), p2(p2),
l1(p1, Point(p2.getX(), p1.getY())), l2(Point(p2.getX(), p1.getY()), p2),
l3(p2, Point(p1.getX(), p2.getY())), l4(Point(p1.getX(), p2.getY()), p1)    // constructor call an array? 
{
    // this->p1 = p1;
    // this->p2 = p2;
    // Line l1(p1, Point(p2.getX(), p1.getY()));
    // Line l2(Point(p2.getX(), p1.getY()), p2);
    // Line l3(p2, Point(p1.getX(), p2.getY()));
    // Line l4(Point(p1.getX(), p2.getY()), p1);
}

const vector<Point> Rectangle::getPoints() const{
    vector<Point> points;
    //efficiency? Redundant
    for(Point point : l1.getPoints()){
        points.push_back(point);
    }
    for(Point point : l2.getPoints()){
        points.push_back(point);
    }
    for(Point point : l3.getPoints()){
        points.push_back(point);
    }
    for(Point point : l4.getPoints()){
        points.push_back(point);
    }

    return points;
}

float Rectangle::getArea() const{
    return abs((p2.getX() - p1.getX()) * (p2.getY() - p1.getY()));
}
