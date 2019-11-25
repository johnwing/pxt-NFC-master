#include "pxt.h"
using namespace pxt;
namespace NFC {
    //%
    int RxBufferedSize(){
    	uBit.display.scroll("HELLO!");
        return uBit.serial.rxBufferedSize();
    }
}