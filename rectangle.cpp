#include "line.h"
#include "rectangle.h"

#include <iostream>
#include <cmath>
#include <math.h>
#include <vector>

using namespace std;

Rectangle::Rectangle(Point p1, Point p2){
    //TODO
}

const vector<Point> Rectangle::getPoints() const{
    vector<Point> points;
    //TODO
}

float Rectangle::getArea() const{
    return (p2.getX - p1.getX) * (p2.getY - p1.getY); //ERROR
}
