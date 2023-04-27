#include "canvas.h"
#include "shape.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

Canvas::Canvas(int width, int height, string name) : AbstractGrid(width, height){
    this->name = name;
}
void Canvas::draw(){
    AbstractGrid::draw();
    cout << "Author: " << name;
}
const vector<Point> Canvas::getPoints() const{
    vector<Point> points;
    for(AbstractShape shape : shapeList){
        for(Point point : shape.getPoints()){
            points.push_back(point);
        }
    }
    return points;
}

float Canvas::getPaintNeeded(){
    float paintNeeded = 0.0f;
    for(AbstractShape shape : shapeList){
        paintNeeded += shape.getArea();
    }
    return paintNeeded;
}
