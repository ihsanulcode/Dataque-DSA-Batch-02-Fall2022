template <class T>
class Array
{
private:
    T *arr;
    int length;

public:
    Array(int);
    void add(int, T);
    T get(int);
    int getLength();
};