#include <stdio.h>
#include "defs.h"

int main() {

    AllInit();
    int index = 0;
    U64 playBitBoard = 0ULL;

    SETBIT(playBitBoard, 61); // Set a BIT (puts an X on the specified index)
    PrintBitBoard(playBitBoard);

    CLRBIT(playBitBoard, 61); // Clears the BIT on the specified index
    PrintBitBoard(playBitBoard);

    return 0;
}
