#include <QCoreApplication>


#include <bcm2835.h>
#include <iostream>
#include <unistd.h>
#include <string.h>
#include "bcmencoder.h"

BcmEncoder encoder;


int main(){
    encoder.initEncoder();
    while(1){
        int angle= 360-(int)encoder.getAngle();
        std::cout<<"\r\e[K"<<"angle: "<<angle<<std::flush;
        delay(2);

    }

}


