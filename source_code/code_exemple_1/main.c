#include <REGX52.H>

sbit LED_PIN = P0^0;

void DELAY(unsigned int n){
	
	unsigned int x,y;
	for(x=0; x< n;x++){
	
		for(y=0 ;y < 50;y++){
			//delay 1ms.
		}
	}
}


void main(){


	while(1){
	
		LED_PIN =!LED_PIN;
		DELAY(500);
	}
	
}