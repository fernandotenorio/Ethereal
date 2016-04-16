#ifndef _SEARCH_H
#define _SEARCH_H

#include <stdint.h>

#include "types.h"


#define MaxKillers  (3)

/* Prototypes */

uint16_t get_best_move(Board * board, int seconds, int logging);
int full_search(Board * board, MoveList * moveList, int depth);
int search(Board * board, int alpha, int beta, int depth, int height, int node_type);
int qsearch(Board * board, int alpha, int beta, int height);
void evaluate_moves(Board * board, int * values, uint16_t * moves, int size, int height, uint16_t tableMove);
uint16_t get_next_move(uint16_t * moves, int * values, int index, int size);
void sort_move_list(MoveList * moveList);

#endif