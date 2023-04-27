#include "line.h"

#include <iostream>
#include <cmath>
#include <math.h>
#include <vector>

using namespace std;

Line::Line(Point p1, Point p2){ //I want to initialize attibutes p1 and p2 with input points. How? TODO: FIX
    this->p1 = p1;
    this->p2 = p2;
}
const vector<Point> Line::getPoints() const{
    int x2 = p2.getX();
    int x1 = p1.getX();
    int y1 = p1.getY();
    int y2 = p2.getY();

    vector<Point> points;

    int dx =  abs (x2 - x1), sx = x1 < x2 ? 1 : -1; //x distance between two points
    int dy = -abs (y2 - y1), sy = y1 < y2 ? 1 : -1; //y distance between two points
    int error = dx + dy; 
    int e2;

    while (true) {
      
      // ADD POINT (X1,Y1)
      points.push_back(Point(x1, y1));
      
      if (x1 == x2 && y1 == y2) {
          break;
      }
      e2 = 2 * error;
      if (e2 >= dy) { error += dy; x1 += sx; }
      if (e2 <= dx) { error += dx; y1 += sy; }
    }
    return points;
}
float Line::getArea() const{ //lines have no area
    return 0.0f;
}