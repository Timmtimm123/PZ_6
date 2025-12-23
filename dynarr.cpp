#include "dynarr.h"

DynArr::DynArr(int size) : size(size) {
    if (size <= 0)
        throw std::invalid_argument("Array size must be positive");

    data = new int[size];
}

DynArr::~DynArr() {
    delete[] data;
}

void DynArr::set(int index, int value) {
    if (index < 0 || index >= size)
        throw std::out_of_range("Index out of range");

    if (value < -100 || value > 100)
        throw std::invalid_argument("Value must be in range -100..100");

    data[index] = value;
}

int DynArr::get(int index) const {
    if (index < 0 || index >= size)
        throw std::out_of_range("Index out of range");

    return data[index];
}

int DynArr::getSize() const {
    return size;
}
