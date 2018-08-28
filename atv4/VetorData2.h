#ifndef VetorData2_H_
#define VetorData2_H_
#include <iostream>
#include "data.h"
using namespace std;

class VetorData{
    private:
        const int tamMax;
    public:
        data** vetdata;
        VetorData();
        ~VetorData();
};

#endif
