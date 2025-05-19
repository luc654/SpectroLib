#include <Adafruit_SH110X.h> 


class SpectroLib{
    public:
        SpectroLib(Adafruit_SH1106G* displayObject); 
        void test();

    private:
        Adafruit_SH1106G* _display; 
};