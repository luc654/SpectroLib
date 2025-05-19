#include <Adafruit_SH110X.h> 


class SpectroLib{
    public:
        SpectroLib(Adafruit_SH1106G* displayObject); 
        void test();

    private:
        Adafruit_SH1106G* _display; 
};echo "# SpectroLib" >> README.md
git init
git add README.md
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/luc654/SpectroLib.git
git push -u origin main