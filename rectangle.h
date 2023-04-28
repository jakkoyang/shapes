#pragma once

#include <iostream>
#include <string>

#include "point.h"
#include "line.h"
#include "shape.h"

class Rectangle : public AbstractShape{
private:
    Line l1;
    Line l2;
    Line l3;
    Line l4;
    // Line lines[4];
    Point p1;
    Point p2;
public:
    Rectangle(Point, Point);
    virtual const std::vector<Point> getPoints() const;
    float getArea() const;
};