#include <stdlib.h>
#include <stdio.h>
#include <regex.h>
#include <sys/types.h>

int main(void)
{
    regex_t re;
    char *p = "a[a-c]";
    regmatch_t match[32];
    char errbuf[1024];
    const char buf[] = "abc123abaecabcdefgac";
    int err, i = 0, j = 1;

    #if 1
    regcomp (&re, p, 0);
    err = regexec (&re, buf, 32, match, 0);
    if (err != 0) 
    {
        printf("error %d\n", err);
        regerror (err, &re, errbuf, 1024);
        printf("%s\n", errbuf);
        exit (2);
    }
    #endif
    printf("%d, %d\n", match[0].rm_so, match[0].rm_eo);
    printf("%d, %d\n", match[1].rm_so, match[1].rm_eo);
    printf("%d, %d\n", match[2].rm_so, match[2].rm_eo);
    printf("%d, %d\n", match[3].rm_so, match[3].rm_eo);
    printf("%d, %d\n", match[4].rm_so, match[4].rm_eo);
    //printf("%d, %d\n", match[5].rm_so, match[5].rm_eo);
    //printf("%d, %d\n", match[6].rm_so, match[6].rm_eo);
    //if (match[j].rm_eo != -1)
    //{
    //i += match[j].rm_eo;
    //}
    //else
    //exit (3);
    //printf("%d, %d\n", match[2].rm_so, match[2].rm_eo);
    regfree (&re);

    return 0;
}
