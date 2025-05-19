#include "SpectroLib.h"
#include <Adafruit_SH110X.h>

SpectroLib::SpectroLib(Adafruit_SH1106G *display) {
  _display = display;
}

void SpectroLib::test(){
    Serial.println("aa");
}
