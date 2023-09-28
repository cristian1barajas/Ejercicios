#include <Arduino.h>

class DataCapture
{
private:
    static bool isInteger(String data);
public:
    static int captureInteger(String message);
    String captureString(String message);
};