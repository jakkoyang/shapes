#include "line.h"
#include "rectangle.h"

#include <iostream>
#include <cmath>
#include <math.h>
#include <vector>

using namespace std;

Rectangle::Rectangle(Point p1, Point p2){ //Declaring all 4 lines + 2 points. How? ERROR
    this->p1 = p1;
    this->p2 = p2;
    Line l1(p1, Point(p2.getX(), p1.getY()));
    Line l2(Point(p2.getX(), p1.getY()), p2);
    Line l3(p2, Point(p1.getX(), p2.getY()));
    Line l4(Point(p1.getX(), p2.getY()), p1);
}

const vector<Point> Rectangle::getPoints() const{
    vector<Point> points;
    //TODO
    return points;
}

float Rectangle::getArea() const{
    return (p2.getX - p1.getX) * (p2.getY - p1.getY); //ERROR. What to do?
}
