#include <Arduino.h>
#include "ec11.h"



void EC11::ec11_init(){
    pinMode(check_key, INPUT_PULLUP);
    pinMode(ec11_a, INPUT_PULLUP);
    pinMode(ec11_b, INPUT_PULLUP);

}

int EC11::ec11_scan(){
    int s_sta = digitalRead(check_key);
    int a_sta = digitalRead(ec11_a);
    int b_sta = digitalRead(ec11_b);
    if(s_sta == 1){
        silence = 1;
        
    }
    else{
        silence = 0;

    }





}

