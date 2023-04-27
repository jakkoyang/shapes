#include "line.h"

#include <iostream>
#include <cmath>
#include <math.h>
#include <vector>

using namespace std;

Line::Line(Point p1, Point p2){
    this->p1 = p1;
    this->p2 = p2;
}
const vector<Point> Line::getPoints() const{
    //how is this supposed to work?
    int x2 = p2.getX();
    int x1 = p1.getX();
    int y1 = p1.getY();
    int y2 = p2.getY();

    int dx =  abs (x2 - x1), sx = x1 < x2 ? 1 : -1; //x distance between two points
    int dy = -abs (y2 - y1), sy = y1 < y2 ? 1 : -1; //y distance between two points
    int error = dx + dy; 
    int e2;

    while (true) {
      
      // ADD POINT (X1,Y1)
      
      if (x1 == x2 && y1 == y2) {
          break;
      }
      e2 = 2 * error;
      if (e2 >= dy) { error += dy; x1 += sx; }
      if (e2 <= dx) { error += dx; y1 += sy; }
    }
}
float Line::getArea() const{
    return 0.0f;
}