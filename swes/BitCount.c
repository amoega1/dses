#include <stdio.h>
#define MAX 4294967295
#define MIN 0

unsigned int count (unsigned int value) {
    unsigned int count = 0;
    while (value > 0) {
        if ((value & 1) == 1) { count++; }
        value >>= 1;
    }
    return count;
}

int main (int argc, char *argv[]) {
    unsigned int _=0;
    if (argc!=2) { printf("error - enter a single integer argument\n"); return -1; }
    if (sscanf (argv[1], "%u", &_)!=1) { printf ("error - not an integer\n"); return -1; }
    else { 
        if (_>MAX || _<MIN) {
             printf("error - value should be 32 bit representable (0-4294967295)\n");
             return -1;
        } else { printf("%d\n",count(_)); return 0; }
    }
}
