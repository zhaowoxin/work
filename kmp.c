// make a big mistake;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void get_next (char *target, int *next, int len)
{
    int i = 0, k = -1;
    next[0] = -1;

    while (i < len)
    {
        if (k == -1 || index[i] == index[k])
        {
            i ++; k ++;
            next[i] = k;
        }
        else
           k = next[k];
    }

    for (i = 0; i < len; i++)
        printf("%d\n", next[i]);

}

int kmp (char *target, char *index, int len_tar, int len_ind)
{
    int i = 0, j = 0;
    int *next;
    next = (int *)malloc (sizeof (int) * len_ind);
    get_next (index, next, len_ind);
    while (i < len_tar && j < len_ind)
    {
        //printf("%d\n", i);
        if (j == -1 || target[i] == index[j])
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
    char *target = "wcabababcab";    
    //char *target = "ababcabcde";    
    char *index = "ababc";
    int len = strlen (target);
    int len2 = strlen (index);
    int pos;

    pos = kmp (target, index, len, len2);
    printf("pos is %d\n", pos);

    return 0;
}
