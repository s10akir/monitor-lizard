#include "M5Atom.h"

void setup(){
    M5.begin(true, false, true);
    delay(50);
}

void loop(){
    M5.dis.drawpix(0, 0xf00000);
    delay(500);
    M5.dis.drawpix(0, 0x707070);
    delay(500);
}
