#ifndef DYNARR_H
#define DYNARR_H

#include <stdexcept>

class DynArr {
private:
    int* data;
    int size;

public:
    DynArr(int size);
    ~DynArr();

    void set(int index, int value);
    int get(int index) const;
    int getSize() const;
};

#endif
