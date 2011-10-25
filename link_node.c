/*
 * This program describe a kind of data structure --link_node and some basic
 * function like insert delete search and reverse.
 */
#include <stdlib.h>
#include <stdio.h>

typedef struct link_node_t {
    int data;
    struct link_node_t *next;
} *Node;

Node init(void)
{
   Node p = (Node) malloc (sizeof(struct link_node_t)); 
   p->data = 0;
   p->next = NULL;

   return p;
}

int insert(Node p, int date)
{
    Node ptr;
    Node new = (Node) malloc (sizeof(struct link_node_t));
    for(ptr = p; ptr->next != NULL; ptr = ptr->next);
    new->data = date;
    ptr->next = new;
    new->next = NULL;

    return 0;
}

int searchall(Node p)
{
    Node ptr;
    for(ptr = p; ptr != NULL; ptr = ptr->next)
    {
        printf("%d\n", ptr->data);
    }
        
    return 0;
}

int delete(Node *p, int date)
{
    Node ptr = *p, ptr2;
    
    if(ptr->data == date)
    {
        *p = ptr->next;
        free(ptr);
    }
    for(ptr = *p, ptr2 = (*p)->next; ptr2->next != NULL; ptr = ptr->next, ptr2 = ptr2->next)
    {
        if(ptr2->data == date)
        {
           ptr->next = ptr2->next; 
           free(ptr2);
        }
    }

    return 0;
}

int another_delete(Node *p, int date)
{
    Node ptr = *p;
    if(ptr->data == date)
    {
        *p = ptr->next;
        free(ptr);
    }
    for(ptr = *p; ptr->next != NULL; ptr = ptr->next)
    {
        if(ptr->next->data == date)
        {
            ptr->next = ptr->next->next;
        }
    }

    return 0;
}

Node reverse(Node *p)
{
    Node q, r, s;
    q = (*p);
    s = NULL;
    while(q) 
    {
       r = q->next; 
       q->next = s;
       s = q;
       q = r;
    }

    return s;
}

int main(void)
{
    Node p = init();
    insert(p, 5);
    insert(p, 7);
    insert(p, 9);
    insert(p, 11);
    insert(p, 13);
    insert(p, 15);
    searchall(p);
    delete(&p, 0);
    searchall(p);
    another_delete(&p, 7);
    searchall(p);
    p = reverse(&p);
    searchall(p);

    return 0;
}
