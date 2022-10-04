#include <REGX52.H>

void delay(unsigned int n){
	unsigned int x,y;
	for(x=0;x<n;x++){
	
		for(y=0;y<123;y++){
		}
	}
}


void main (){
unsigned char i ;
	
while (1)
{
	P2=0x01;
	for (i=0;i<8;i++)
	{
	//	delay(1000);
		P2 = P2 | (1<<i) ;
		delay(500);
	}
	P2=0x00;
	for (i=0;i<8;i++)
	{
	//	delay(1000);
		P2 = P2 | (0x80>>i) ;
		delay(500);
	}
}
	
}