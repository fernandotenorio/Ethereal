#ifndef UTIL_H
#define UTIL_H

#include "board.h"
#include "castle.h"
#include "colour.h"
#include "move.h"
#include "piece.h"
#include "search.h"
#include "types.h"
#include "util.h"

static int table_256_to_64[256] = {
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
	-1,-1,-1,-1, 0, 1, 2, 3, 4, 5, 6, 7,-1,-1,-1,-1,
	-1,-1,-1,-1, 8, 9,10,11,12,13,14,15,-1,-1,-1,-1,
	-1,-1,-1,-1,16,17,18,19,20,21,22,23,-1,-1,-1,-1,
	-1,-1,-1,-1,24,25,26,27,28,29,30,31,-1,-1,-1,-1,
	-1,-1,-1,-1,32,33,34,35,36,37,38,39,-1,-1,-1,-1,
	-1,-1,-1,-1,40,41,42,43,44,45,46,47,-1,-1,-1,-1,
	-1,-1,-1,-1,48,49,50,51,52,53,54,55,-1,-1,-1,-1,
	-1,-1,-1,-1,56,57,58,59,60,61,62,63,-1,-1,-1,-1,
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,
	-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1
};

static int table_64_to_256[64] = {
	 68, 69, 70, 71, 72, 73, 74, 75,
	 84, 85, 86, 87, 88, 89, 90, 91,
	100,101,102,103,104,105,106,107,
	116,117,118,119,120,121,122,123,
	132,133,134,135,136,137,138,139,
	148,149,150,151,152,153,154,155,
	164,165,166,167,168,169,170,171,
	180,181,182,183,184,185,186,187
};

/* Function Prototypes */
int char_to_piece(char c);
char piece_to_char(int p);
void init_board_t(board_t * board, char setup[73]);


/* Macro Definitions */
#define CONVERT_64_TO_256(n)		(table_64_to_256[n])
#define CONVERT_256_TO_64(n)		(table_256_to_64[n])
#define CONVERT_TO_FILE(n)			('a' + (n % 16) - 4)
#define CONVERT_TO_RANK(n)			('8' - (n / 16) + 4)

#endif
