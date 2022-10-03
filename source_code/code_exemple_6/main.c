#include <REGX52.H>

void delay(unsigned int n){
	unsigned int x,y;
	for(x=0;x<n;x++){
		for(y=0;y<123;y++){
		}
	}

}

void main(){
	
	while(1){
	unsigned int i;

		for ( i=0;i<7;i++)
	{
			P0 = 0x80;
			delay(1000);
			
				for ( i=0;i<7;i++)
				{
					P0 = P0>>1;
					delay(1000);
				}
		
	}
	
	
	}

}