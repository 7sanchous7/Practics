#include <8051.h>  
#include <string.h>
void print1stline(char* str, int p, int counter)
{
	int i = 0;
	P0 = 0x99 - counter;
	P2 = 0x1;
	P2 = 0x0;


 	for (i = 0; i < p; i++){
		P0 = str[i];
		P2 = 0x3;
		P2 = 0x2;
	}
}
void print2ndline(char* str2)
{
	int i = 0;
	P0 = 0xC0;
	P2 = 0x1;
	P2 = 0x0;
	for (i = 0; i < 7; i++){
		P0 = str2[i];
		P2 = 0x3;
		P2 = 0x2;
		P0 = " ";
		P2 = 0x3;
		P2 = 0x2;
	}
	P0 = 0x01;
 	P2 = 0x0;
 	P2 = 0x1;
}

void main()

{
	unsigned int i, counter = 1, ShiftController = 0, p=1;
	unsigned char* str = "Hello";
	unsigned char* str2 = "Friends";
	unsigned char* str3 = " ";
    int n = 0x99;
	P0 = 0x38;
	P2 = 0x1;
	P2 = 0x0;
	P0 = 0x8A;
	P2 = 0x1;
	P2 = 0x0;

while(1){
 print1stline(str, p, counter);
 print2ndline(str2);
 P0 = 0x01;
 P2 = 0x0;
 P2 = 0x1;
 counter++;
 if(p<6)
{
 p++;
}
if (ShiftController == 0)
{
	ShiftController++;
	counter+=5;
}
 if (counter == 25) 
	{
	counter = 0; 
	p = 0;
	ShiftController = 0;
	}
	
}
}
end;
