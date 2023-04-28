#pragma once

#include <string>
#include <vector>

#include "point.h"

class AbstractGrid {
    int width;
    int height;
protected:
    virtual std::string getPixelAtPoint(int x, int y, const std::vector<Point>& points) const;
    virtual bool containsPoint(int x, int y, const std::vector<Point>& points) const;
    virtual const std::vector<Point> getPoints() const;
public:
    AbstractGrid(int width, int height);
    virtual void draw() const;
};
