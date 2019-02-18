#include <stdio.h>

/* 
 * turtleGraphicsParser.c
 * 
 * This program is based on exercise 5 of the book Pragmatic Programmer (2000)
 * 
 * Program should be able to parse a turtle graphics style of file in the format:
 * 
 * P 2  # select a pen type 2
 * D    # place pen down
 * E 3  # draw east 3cm
 * N 1  # draw north 1cm
 * W 3  # draw west 3cm
 * S 1  # draw south 1cm
 * U    # lift pen up
 *
 */
#define NO_ARG 0
#define ARG 1

void doSelectPen(int penSize, int);
void doPenUp(int, int);
void doPenDown(int, int);
void doPenDir(int direction, int magnitude);

typedef struct {
    char cmd;
    int hasArg;
    void (*func)(int, int);
} Command;

static Command cmds[] = {
    { 'P', ARG,     doSelectPen },
    { 'U', NO_ARG,  doPenUp     },
    { 'D', NO_ARG,  doPenDown   },
    { 'N', ARG,     doPenDir    },
    { 'E', ARG,     doPenDir    },
    { 'S', ARG,     doPenDir    },
    { 'W', ARG,     doPenDir    }
}; 


int main(int argc, char *argv[])
{
    return 0;
}
