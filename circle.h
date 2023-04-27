#pragma once

#include <iostream>
#include <string>

#include "point.h"
#include "shape.h"

class Circle : public AbstractShape{
private:
    Point center; //??????
    int radius;
public:
    Circle(Point, int);
    const std::vector<Point> getPoints() const;
    float getArea() const;
};