#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void get_next (char *target, int *next, int len)
{
    int i = 0, k = -1;
    next[0] = -1;

    while (i < len)
    {
        if (k == -1 || target[i] == target[k])
        {
            i ++; k ++;
            next[i] = k;
        }
        else
           k = next[k];
    }

}

int kmp (char *target, char *index, int len_tar, int len_ind)
{
    int i = 0, j = 0;
    int *next;
    next = (int *)malloc (sizeof (int) * len_ind);
    get_next (target, next, len_tar);
    while (i < len_tar && j < len_ind)
    {
        //printf("%d\n", i);
        if (next[j] == -1 || target[i] == index[j])
        {
            i ++; j++;
        }
        else 
            j = next[j];
    }

    return i - len_ind;

}

int main(void)
{
    char *target = "aabbcdefghelifhhnlihbli";    
    char *index = "lifhh";
    int len = strlen (target);
    int len2 = strlen (index);
    int pos;

    pos = kmp (target, index, len, len2);
    printf("pos is %d\n", pos);

    return 0;
}
