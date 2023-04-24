#pragma once

#include <string>

class Canvas{
private:
    int length, width;
    string name;
public:
    Canvas(int, int, string);
    void draw();
    float getPaintNeeded();
};