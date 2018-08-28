#include <iostream>
#include "data.h"
#include "VetorData2.h"
using namespace std;


VetorData::VetorData() : tamMax(100){
    for(int i = 0; i< tamMax; i++){
        vetdata[i] = new data;
    }
}

VetorData::~VetorData(){
    for(int i = 0; i< tamMax; i++){
        delete vetdata[i];
    }
    delete [] vetdata;
}
