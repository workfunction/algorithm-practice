typedef struct node_t NODE;
typedef struct list_t LIST;

#define GET_INT(v) *(int*)((v))

struct node_t
{
    void *value;
    NODE *next;
};

struct list_t
{
    NODE *head;
    unsigned int size;
    void (*insert_head)(LIST* list, void *value);
    void (*insert_tail)(LIST* list, void *value);
    NODE*(*remove_head)(LIST* list);
    NODE*(*find_node)  (LIST* list, void *value);
    void (*remove_node)(LIST* list, void *value);
    void (*sort_list)  (LIST* list, int method);
    void (*print_list) (LIST* list);
};

LIST*  init_list(void);