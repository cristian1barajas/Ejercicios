#include <Arduino.h>

class DataCapture
{
private:
    
public:
    static int captureInteger(String message);
    static String captureString(String message);
    static float captureFloat(String message);
};