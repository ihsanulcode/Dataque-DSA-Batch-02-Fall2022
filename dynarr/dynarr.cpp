#include "dynarr.h"
#include <iostream>
using namespace std;

dynarr::dynarr()
{
    arr = NULL;
    size = 0;
}

dynarr::dynarr(int size)
{
    arr = new int[size]; // dynamic memory allocation
    this->size = size;
}

void dynarr::setValue(int index, int data)
{
    arr[index] = data;
}

int dynarr::getValue(int index)
{
    return arr[index];
}

dynarr::~dynarr()
{
    delete[] arr; // memory deallocation
}