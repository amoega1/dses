#include <stdio.h>
#include <stdlib.h>
#define MAX 255 
#define MIN 0

int main (int argc, char *argv[]) {
    unsigned int mask=MAX;
    unsigned int _;
    int n=sizeof(argv[1])/sizeof(char);
    if (argc!=2) { printf("error - enter a single integer argument\n"); return -1; }
    if (sscanf (argv[1], "%i", &_)!=1) { printf("error - not an integer\n"); return -1; }
    else {
        for (int i=0;i<n;++i){
            if (argv[1][i] == '.') { printf("error - not an integer\n"); return -1; }
        }
	if (_>MAX || _<MIN) { 
	    printf("error - value should be byte representable natural number (0-255)\n"); 
	    return -1; 
	} else { 
	    _=(~_)&mask; 
	    printf("%u\n",_); 
	}
    }
    return 0;
}
