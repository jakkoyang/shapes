#pragma once

#include "grid.h"
#include <string>
#include <vector>
#include "shape.h"

class Canvas : public AbstractGrid{
private:
    //int height, width; //inherited
    string name;
    vector<AbstractShape> shapeList;
public:
    Canvas(int, int, string);
    void draw(); //override draw method from grid
    virtual const std::vector<Point> getPoints() const; //method is used in draw function in Grid
    float getPaintNeeded(); //return area of shapes. Area of line is 0
};