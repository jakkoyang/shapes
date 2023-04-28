#pragma once

#include "grid.h"
#include <string>
#include <vector>
#include "shape.h"
#include <memory>

class Canvas : public AbstractGrid{
private:
    //int height, width; //inherited
    std::string name;
    std::vector<AbstractShape*> shapeList;
public:
    Canvas(int, int, std::string);
    ~Canvas();
    virtual void draw(); //override draw method from grid
    virtual const std::vector<Point> getPoints() const; //method is used in draw function in Grid
    float getPaintNeeded(); //return area of shapes. Area of line is 0
    void addShape(AbstractShape*);
};
