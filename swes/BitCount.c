#include <stdio.h>
#define MAX 4294967295u
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
    double _=0;
    int n=sizeof(argv[1])/sizeof(char);

    if (argc!=2) { printf("error - enter a single integer argument\n"); return -1; }
    if (sscanf (argv[1], "%lf", &_)!=1) {
        printf ("error - not an integer\n"); return -1; 
    } else {
        for (int i=0;i<n;++i){
            if (argv[1][i] == '.' || argv[1][i] == '-') { printf("error - not a 32bit equivalent natural number\n"); return -1; }
        }
        if (_>MAX || _<MIN) { 
            printf("error - value out of range\n");
            return -1;
        } else { printf("%d\n",count(_)); return 0; }
    }
}
