#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/select.h>

volatile char * test;
struct timeval tv;

main() {
    test = malloc(100);
    test = "HALLLOOOOOOHHHHHHHBBBBBAAHHHHHHHAJJLDLKEJJJJLLLLLLL";
    while (1) {
       printf("%s\n", test);
       tv.tv_sec = 0;
       tv.tv_usec = 5000;
       select(0,0,0,0,&tv);
       //sleep(1);
    }
}

