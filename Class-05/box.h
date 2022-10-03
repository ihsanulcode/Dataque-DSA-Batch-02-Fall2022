class Box
{
private:
    double height;
    double width;
    double depth;

public:
    Box();                       // no-arg
    Box(double, double, double); // argument
    void setHeight(double);
    void setWidth(double);
    void setDepth(double);
    double getHeight();
    double getWidth();
    double getDepth();
    double volume();
};