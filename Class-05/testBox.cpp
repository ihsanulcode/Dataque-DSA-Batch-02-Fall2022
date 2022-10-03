#include <iostream>
#include "box.cpp"
using namespace std;

int main()
{
    // className objectName();

    Box box1(5.5, 4.5, 6.5);

    cout << "Box 1" << endl;
    cout << "Height: " << box1.getHeight() << endl;
    cout << "Width: " << box1.getWidth() << endl;
    cout << "Depth: " << box1.getDepth() << endl;
    cout << "Volume: " << box1.volume() << endl;

    Box box2;
    box2.setHeight(5.5);
    box2.setWidth(4.5);
    box2.setDepth(6.5);

    cout << "\nBox 2" << endl;
    cout << "Height: " << box2.getHeight() << endl;
    cout << "Width: " << box2.getWidth() << endl;
    cout << "Depth: " << box2.getDepth() << endl;
    cout << "Volume: " << box2.volume() << endl;

    double h,w,d;
    cout << "Enter Height, Width, Depth: ";
    cin >> h >> w >> d;

    Box box3(h,w,d);
    cout << "\nBox 3" << endl;
    cout << "Height: " << box3.getHeight() << endl;
    cout << "Width: " << box3.getWidth() << endl;
    cout << "Depth: " << box3.getDepth() << endl;
    cout << "Volume: " << box3.volume() << endl;
}