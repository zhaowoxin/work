#include <stdlib.h>
#include <stdio.h>
#include <regex.h>
#include <sys/types.h>

int main(void)
{
    regex_t re;
    char *p = "a[a-c]";
    regmatch_t match[1024];
    char errbuf[1024];
    const char buf[] = "abc123abaecabcdefgac";
    int err, i = 0, j = 0;

    regcomp (&re, p, 0);
    while (buf[i] != '\0')
    {
        err = regexec (&re, &buf[i], 1, &match[j], 0);
        if (err != 0) 
        {
            printf("error %d\n", err);
            regerror (err, &re, errbuf, 1024);
            printf("%s\n", errbuf);
            exit (2);
        }
        printf("%d, %d\n", match[j].rm_so + i, match[j].rm_eo + i);
        if (match[j].rm_eo != -1)
        {
            i += match[j].rm_eo;
            j++;
        }
        else
            exit (3);
    }
    //printf("%d, %d\n", match[2].rm_so, match[2].rm_eo);
    regfree (&re);

    return 0;
}
