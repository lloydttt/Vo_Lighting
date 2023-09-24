#ifndef EC11_H
#define EC11_H

#include <Arduino.h>

#define check_key 
#define ec11_a 
#define ec11_b 

class EC11{

public:
    int silence;
    int rotate_ori;


    void ec11_init();

    int ec11_scan();


};




#endif