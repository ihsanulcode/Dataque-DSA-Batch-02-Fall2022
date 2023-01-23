class dynarr
{
private:
    int *arr;
    int size;

public:
    dynarr();
    dynarr(int);
    ~dynarr();
    void setValue(int, int);
    int getValue(int);
};
