#include <Arduino.h>
#include "ec11.h"



void EC11::ec11_init(){
    pinMode(check_key, INPUT_PULLUP);
    pinMode(ec11_a, INPUT_PULLUP);
    pinMode(ec11_b, INPUT_PULLUP);

}

int EC11::ec11_check(){
    
}


