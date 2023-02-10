#include "suma.h"

int t;

suma::suma(int e){
    t=e;    
}

void suma::numero(){
    t=t+1;
    Serial.println(t);
}
