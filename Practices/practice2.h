#ifndef _PRACTICE2_H_
#define _PRACTICE2_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void practice2();

typedef struct node
{
	int value;	/* データ */
	struct node *p_prev, *p_next;	/* 前方と後方のノードアドレス */
}NODE;

NODE *create_node(void);

bool valid_node(NODE *p_node);
void connect(NODE *p_node1, NODE *p_node2);
bool insert_prev(NODE *p_node, NODE *p_inserting_node);
bool insert_next(NODE *p_node, NODE *p_inserting_node);
bool remove_node(NODE *p_node);

#endif // !_PRACTICE2_H_