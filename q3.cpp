
//Purvesh  Joshi Q3

#include "include/basicIO.h"

extern "C" int main() {
    char name[100];
    char ageStr[10];
    char confirm[5];   // bigger buffer for safety

    io.outputstring("Enter your name: ");
    io.inputstring(name, sizeof(name));

    io.outputstring("Enter your age: ");
    io.inputstring(ageStr, sizeof(ageStr));

    // validate age is a number
    bool valid = true;
    for (int i = 0; ageStr[i] != '\0'; i++) {
        if (ageStr[i] < '0' || ageStr[i] > '9') {
            valid = false;
            break;
        }
    }

    if (!valid) {
        io.errorstring("Invalid age. Must be numeric.\n");
        return 1;
    }

    io.outputstring("You entered: ");
    io.outputstring(name);
    io.outputstring(" , age: ");
    io.outputstring(ageStr);
    io.outputstring("\nIs this correct? (y/n): ");
    io.inputstring(confirm, sizeof(confirm));


      if (confirm[0] == 'y' || confirm[0] == 'Y') {
        io.outputstring("Confirmed!\n");
    } else {
        io.outputstring("Not confirmed.\n");
    }

    return 0;
}

