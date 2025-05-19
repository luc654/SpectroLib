#include "SpectroLib.h"
#include <Wire.h>
#include <Adafruit_SH110X.h>

SpectroLib::SpectroLib(Adafruit_SH1106G *display) {
  _display = display;
}


void SpectroLib::begin(){
  
  Wire.begin();  
  _display->begin(0x3C, true);  

  _display->clearDisplay();
  _display->setTextSize(1);      
  _display->setTextColor(SH110X_WHITE);
}

void SpectroLib::testDisplay(){
  showText("Hello world", 10,10);
}









// ========================================
// Private functions
// ========================================

void SpectroLib::showText(const char *text, int xPos, int yPos) {
  _display->clearDisplay();
  Serial.print("Setting text: ");
  Serial.println(text);
  _display->setCursor(xPos, yPos);
  _display->println(text);
  _display->display();
}