#include <stdio.h>
#include <wiringPi.h>

int main (int argc, char *argv[]) {

	wiringPiSetup();

	for (int i=0;i<8;++i){
		pinMode (i, OUTPUT);
	}
	
	for (;;){
		for (int i=0;i<8;++i){
			digitalWrite (i, HIGH);
			delay(1000);
			digitalWrite (i, LOW);
			delay(100);
		}
	}
	return 0;
}
