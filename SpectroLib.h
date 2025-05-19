#include <Adafruit_SH110X.h> 


class SpectroLib{
    public:
        SpectroLib(Adafruit_SH1106G* displayObject); 
        void begin();
        void testDisplay();

    private:
        Adafruit_SH1106G* _display; 
        void showText(const char* text, int xPos, int yPos);
};