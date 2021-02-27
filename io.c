#include "stdio.h"
#include "defs.h"

char *PrSq(const int sq) {
    static char SqStr[3];

    int file = FilesBrd[sq];
    int rank = RanksBrd[sq];

    sprintf(SqStr, "%c%c", ('a'+file), ('1'+rank));

    return SqStr;
}

char *PrMove(const int move) {
    static char MvStr[6];

    int ff = FilesBrd[FROMSQ(move)]; // File From
    int rf = RanksBrd[FROMSQ(move)]; // Rank From
    int ft = FilesBrd[TOSQ(move)]; // File To
    int rt = RanksBrd[TOSQ(move)]; // Rank To

    int promoted = PROMOTED(move);

    if(promoted) {
        char pchar = 'q';
        if(IsKn(promoted)) {
            pchar = 'n';
        } else if(IsRQ(promoted) && !IsBQ(promoted)) {
            pchar = 'r';
        } else if(!IsRQ(promoted) && IsBQ(promoted)) {
            pchar = 'b';
        }
        sprintf(MvStr, "%c%c%c%c%c", ('a'+ff), ('1'+rf), ('a'+ft), ('1'+rt), (pchar));
    } else {
        sprintf(MvStr, "%c%c%c%c", ('a'+ff), ('1'+rf), ('a'+ft), ('1'+rt));
    }

    return MvStr;
}