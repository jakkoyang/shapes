#include "canvas.h"
#include "shape.h"
#include "line.h"
#include "rectangle.h"
#include "circle.h"
#include <iomanip>
#include <iostream>
#include <memory>

using namespace std;

int main()
{
    const int CANVAS_SIZE = 50;
    const int CANVAS_MAX_X = CANVAS_SIZE - 1;
    const int CANVAS_MAX_Y = CANVAS_SIZE - 1;
    
    Canvas canvas(CANVAS_SIZE, CANVAS_SIZE, "Trevor Harmon");
    
    // Add line from (0,0) to (CANVAS_MAX_X, CANVAS_MAX_Y)
    canvas.addShape(Line(Point(0,0), Point(CANVAS_MAX_X, CANVAS_MAX_Y)));
    // Add line from (0,CANVAS_MAX_Y) to (CANVAS_MAX_X, 0)
    canvas.addShape(Line(Point(0,CANVAS_MAX_Y), Point(CANVAS_MAX_X, 0)));
    // Add circle at center (CANVAS_SIZE / 2, CANVAS_SIZE / 2) with radius 20
    canvas.addShape(Circle(Point(CANVAS_SIZE / 2, CANVAS_SIZE / 2), 20));
    // Add rectangle with upper left corner at (0,CANVAS_MAX_Y) and lower right corner at (CANVAS_MAX_X,0)
    canvas.addShape(Rectangle(Point(0,CANVAS_MAX_Y), Point(CANVAS_MAX_X,0)));

    canvas.draw();
    
    cout << "Paint needed: " << fixed << setprecision(1) << canvas.getPaintNeeded() << endl;

    //TODO: add stick figure
    
    return 0;
}
