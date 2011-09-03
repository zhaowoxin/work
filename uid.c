#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>
#include <errno.h>
#include <sys/stat.h>

#define PATH "/abc"

int errno;
int main(void)
{
    uid_t uid = getuid();
    uid_t euid = geteuid();
    struct passwd *pass;
    struct stat info;
    int fd;
    int pid;

    //pass = (struct passwd *)malloc(sizeof(struct passwd));

    fd = open(PATH, O_RDWR);
    fstat(fd, &info);
    printf("%d\n", info.st_uid);
    printf("uid = %d, euid = %d\n", uid, euid);
    pass = getpwnam("grin");
    printf("%d\n", pass->pw_uid);
    
    int ret = setuid(pass->pw_uid);
    //int ret = setuid(info.st_uid);
    if (ret == -1) 
    {
        printf("ERROR\n");
    }
    else 
    {
        printf("successful\n");
    }
    
    /*
    ret = seteuid(info.st_uid);
    if (ret == -1) 
    {
        printf("ERROR\n");
    }
    else 
    {
        printf("successful\n");
    }
    */
    if((pid = fork()) < 0)
    {
        printf("Fork Error\n");
    }
    else if(pid == 0)
    {
        //int retur = setuid(1000); 
       fd = open(PATH, O_RDWR);
       if(fd == 0)
       {
           printf("Open error\n");
       }
    }
    uid = getuid();
    euid = geteuid();

    printf("uid = %d, euid = %d\n", uid, euid);
    fd = open(PATH, O_RDWR);
    fstat(fd, &info);
    printf("%d\n", info.st_uid);
    endpwent();
    close(fd);
    //free(pass);
    return 0;
}
