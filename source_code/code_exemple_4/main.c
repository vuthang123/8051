#include <REGX52.H>


void delay(unsigned int n)
{	
	unsigned int x,y;
	for(x=0;x<n;x++)
	{
		for(y=0;y<123;y++){
		}
	
	}

}
void main(){
	unsigned char i ;
	for(i=0;i<5;i++)
	{
			P0=0x00;
			delay(500);
			P0 = 0xFF;
			delay(500);
		
		
	}
	for(i=0;i<9;i++)
	{
			P0=0x00;
			delay(500);
			P0 = 0xF0;//11110000
			delay(500);
		
		
	}
	for(i=0;i<5;i++)
	{
			P0=0x00;
			delay(500);
			P0 = 0xF;//00001111
			delay(500);
		
		
	}
	
	//hieu ung led 3 
			
	for (i=0;i<5;i++){
			P0=0x00;
			delay(500);
			P0 = 0x55  ;
			delay(500);
	}
	for (i=0;i<5;i++){
			P0=0x00;
			delay(500);
			P0 = 0xAA;
			delay(500);
	}
	
}