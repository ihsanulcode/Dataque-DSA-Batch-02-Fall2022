#include "box.h"

Box::Box()
{
    this->height = 0;
    this->width = 0;
    this->depth = 0;
}

Box::Box(double height, double width, double depth)
{
    this->height = height;
    this->width = width;
    this->depth = depth;
}

double Box::volume()
{
    double vol = this->height * this->width * this->depth;
    return vol;
    // return this->height * this->width * this->depth;
}

void Box::setHeight(double height)
{
    this->height = height;
}

void Box::setWidth(double width)
{
    this->width = width;
}

void Box::setDepth(double depth)
{
    this->depth = depth;
}

double Box::getHeight()
{
    return this->height;
}

double Box::getWidth()
{
    return this->width;
}

double Box::getDepth()
{
    return this->depth;
}