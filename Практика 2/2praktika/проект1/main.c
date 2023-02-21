#include <8051.h>
void main()
{
unsigned char i = 0, k = 0, j=1;
unsigned char massiv [11]=
{
0xC0,
0xF9,
0xA4,
0xB0,
0x99,
0x92,
0x82,
0xF8,
0x80,
0x90,
0xFF
};
P1=massiv [10];
do{
	if (P3 == 0)
	{
		k=0;
	}
if (P3 > 0 && k == 0)
{
	if(i == 5)
		{
			i = 0;
			j=1;
		}
P2=massiv[j];
i++;
k++;
j=j+2;
}
}while(1);
}