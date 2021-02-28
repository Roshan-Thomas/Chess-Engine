#include "stdio.h"
#include "defs.h"

 /*

  MoveGen(board, list)
    Loop all pieces
        -> Slider loop each direction add move
            -> AddMove list->moves[list->count] = move; list->count++;

 */

void AddQuietMove(const S_BOARD *pos, int move, S_MOVELIST *list) {
    list->moves[list->count].move = move;
    list->moves[list->count].score = 0;
    list->count++;
}

void AddCaptureMove(const S_BOARD *pos, int move, S_MOVELIST *list) {
    list->moves[list->count].move = move;
    list->moves[list->count].score = 0;
    list->count++;
}

void AddEnPassantMove(const S_BOARD *pos, int move, S_MOVELIST *list) {
    list->moves[list->count].move = move;
    list->moves[list->count].score = 0;
    list->count++;
}

void GenerateAllMoves(const S_BOARD *pos, S_MOVELIST *list) {
    list->count = 0;
}