#ifndef BRAINFUCK_H
#define BRAINFUCK_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


/**
 * node_s - doubly linked list node for bf
 * @n: the integer stored in the node
 * @prev: points to previous node
 * @next: points to the next node
 *
 * Description: each node in brainfuck holds an int starting with 0
 *              one switches nodes with < or > and uses - or + to
 *              increase or decreas node int value <n>
 */

typedef struct node_s
{
	int n;
	struct node_s *prev;
	struct node_s *next;
} node_t;



#endif /*BRAINFUCK_H*/
