#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

typedef struct node_s{
    struct node_s *previous;
    int32_t value;
    struct node_s *next;
} node_t;

typedef struct list_s {
    node_t *first;
    node_t *last;
    uint32_t length;
    int32_t sum;
} list_t;

void *ec_malloc(uint16_t size);
void error(char *message);

list_t *init();

void print_list(list_t *list);

void add_beginning(list_t *list, int32_t val);
void add_end(list_t *list, int32_t val);
void add_node(list_t *list, int32_t val, node_t *node);
int32_t remove_node(list_t *list, node_t *node);
void destroy(list_t *list);

node_t *get_first(list_t *list);
node_t *get_last(list_t *list);
uint32_t get_length(list_t *list);
node_t *get_previous(node_t *node);
node_t *get_next(node_t *node);
int32_t get_value(node_t *node);
int32_t get_sum(list_t *list);