#include <string.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct hash_node_t {
    int data;
    struct hash_node_t *next;
}hash_node;

typedef struct hash_table_t {
    hash_node *value[10];
}hash_table;

hash_table *create_hash_table()
{
    hash_table *phash = (hash_table *)malloc(sizeof(struct hash_table_t));
    memset(phash, 0, sizeof(struct hash_table_t));

    return phash;
}

hash_node *find_data_in_hash(hash_table *phash, int data)
{
    hash_node *pnode;
    if(NULL == phash)
    {
        return NULL;
    }
    if (NULL == (pnode = phash->value[data % 10])) 
    {
        return NULL;
    }
    while(pnode)
    {
        if(data == pnode->data)
            return pnode;
        pnode = pnode->next;
    }

    return NULL;
}

int insert_data_into_hash(hash_table *phash, int data)
{
    hash_node *pnode;
    if (NULL == phash) 
    {
        return 1;
    }
    if (NULL == phash->value[data % 10])     
    {
        pnode = (hash_node *)malloc(sizeof(struct hash_node_t));
        memset(pnode, 0, sizeof(struct hash_node_t));
        pnode->data = data;
        phash->value[data % 10] = pnode;
        return 0;
    }
    if (NULL != find_data_in_hash(phash, data)) 
    {
        return 1;
    }
    pnode = phash->value[data % 10];
    while (NULL != pnode->next) 
    {
        pnode = pnode->next;
    }
    pnode->next = (hash_node *)malloc(sizeof(struct hash_node_t));
    memset(pnode->next, 0, sizeof(hash_node));
    pnode->next->data = data;
    return 0;
}

int delete_data_from_hash(hash_table *phash, int data)
{
    hash_node *phead;
    hash_node *pnode;

    if(NULL == phash || (NULL == phash->value[data % 10]))
        return 1;
    if (NULL == (pnode = find_data_in_hash(phash, data))) 
    {
        return 1;
    }
    if (pnode == phash->value[data % 10]) 
    {
        phash->value[data % 10] = pnode->next;
        goto final;
    }
    phead = phash->value[data % 10];
    while (pnode != phead->next)     
    {
        phead = phead->next;
    }
    phead->next = pnode->next;

final:
    free(pnode);
    return 0;
}

int main(void)
{
    

    return 0;
}
