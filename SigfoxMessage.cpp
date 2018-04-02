#include "SigfoxMessage.h"
#include <SigFox.h>


/*
* If the message has not been sent, the value returned will be greater
* than 0.
*/
int SigfoxMessage::sendMessage(char message[]) {
    int messageSent = 1;

    int messageLength = sizeof(message) / sizeof(char);
    if (messageLength < MAX_MESSAGE_LENGTH) 
    {
        SigFox.begin();
        delay(100);
        SigFox.status();
        delay(1);
        
        SigFox.beginPacket();
        SigFox.print(message);
        messageSent = SigFox.endPacket(true);
        SigFox.end();
    }

    return messageSent;
}