#include "canvas.h"
#include "shape.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

Canvas::Canvas(int width, int height, string name) : AbstractGrid(width, height){ //defines name
    this->name = name;
}
void Canvas::draw(){ //same as base function. Just add author's name at bottom
    AbstractGrid::draw();
    cout << endl << "Author: " << name;
}
const vector<Point> Canvas::getPoints() const{ //Iterates through every shape's getPoints function and adds all Points into "points" and returns that
    vector<Point> points;
    for(AbstractShape shape : shapeList){
        for(Point point : shape.getPoints()){
            points.push_back(point);
        }
    }
    return points;
}

float Canvas::getPaintNeeded(){ //iterates through every shape. Adds every float from shape's getArea() funct into paintNeeded and returns it
    float paintNeeded = 0.0f;
    for(AbstractShape shape : shapeList){
        paintNeeded += shape.getArea();
    }
    return paintNeeded;
}
