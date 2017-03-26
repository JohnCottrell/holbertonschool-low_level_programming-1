#ifndef BIN_TREE_H
#define BIN_TREE_H
#include <stdlib.h>

typedef struct binary_tree_s heap_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s bst_t;
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;

struct sl_node_s
{
	struct sl_node_s *next;
	binary_tree_t *value;
};
typedef struct sl_node_s sl_node_t;


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
void binary_tree_print(const binary_tree_t *tree);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);
size_t get_height(const binary_tree_t *tree, size_t height);
size_t binary_tree_depth(const binary_tree_t *node);
size_t binary_tree_size(const binary_tree_t *tree);
size_t get_size(const binary_tree_t *tree, size_t size);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
int full_up(const binary_tree_t *tree);
size_t count_nodes(const binary_tree_t *tree, size_t nodes);
int binary_tree_is_perfect(const binary_tree_t *tree);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second);
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
sl_node_t *add_node_end(sl_node_t **head, sl_node_t **tail, binary_tree_t *value);
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
void recurse_level(const binary_tree_t *tree, void(*func)(int),
		   sl_node_t *head, sl_node_t *tail);
binary_tree_t *pop_queue(sl_node_t *head);
#endif
