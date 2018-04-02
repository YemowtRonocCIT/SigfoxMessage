#ifndef SIGFOX_MESSAGING_H
#define SIGFOX_MESSAGING_H

#include <SigFox.h>

class SigfoxMessage {

public:
    int sendMessage(char message[]);

private:
    int MAX_MESSAGE_LENGTH = 12;
};

#endif