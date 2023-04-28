#pragma once

#include <iostream>
#include <string>

#include "point.h"
#include "shape.h"

class Line : public AbstractShape{
private:
    Point p1;
    Point p2;
public:
    Line(Point, Point);
    const std::vector<Point> getPoints() const;
    float getArea() const;
};