#ifndef __BINARY_TREES_H__
#define __BINARY_TREES_H__

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;


void binary_tree_print(const binary_tree_t *);

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

#endif