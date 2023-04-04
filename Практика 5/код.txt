#include <8051.h>

void main()
{
unsigned int counter = 0, ShiftCounter = 0;
unsigned char arr[16] = { '0' , '1', '2', '3', '4', '5', '6', '7', '8', '9', 'C', '+', '-', '*', '=', '/'};

for( ; ; ){
if(ShiftCounter == 16)
{
	P3 = 0x80;
	P1 = 0x3;
	P1 = 0x2;
	P3 = 0x01;
	P1 = 0x1;
	P1 = 0x0;
	ShiftCounter = 0;
}

P2 = 7;
if (P0 == 254 && counter == 0){
P3 = arr[7]; 
P1 = 0x3;
P1 = 0x2;
counter++;
ShiftCounter++;
}

if (P0 == 253 && counter == 0){
P3 = arr[4];
P1 = 0x3;
P1 = 0x2;
counter++;
ShiftCounter++;
}

if (P0 == 251 && counter == 0){
P3 = arr[1];
P1 = 0x3;
P1 = 0x2;
counter++;
ShiftCounter++;
}

if (P0 == 247){
P3 = 0x01;
P1 = 0x1;
P1 = 0x0;
ShiftCounter = 0;
}

//////////////////////
P2 = 11;
if (P0 == 254 && counter == 0){
P3 = arr[8];
P1 = 0x3;
P1 = 0x2;
counter++;
ShiftCounter++;
}

if (P0 == 253 && counter == 0){
P3 = arr[5];
P1 = 0x3;
P1 = 0x2;
counter++;
ShiftCounter++;
}

if (P0 == 251 && counter == 0){
P3 = arr[2];
P1 = 0x3;
P1 = 0x2;
counter++;
ShiftCounter++;
}

if (P0 == 247 && counter == 0){
P3 = arr[0];
P1 = 0x3;
P1 = 0x2;
counter++;
ShiftCounter++;
}

P2 = 13;
if (P0 == 254 && counter == 0){
P3 = arr[9];
P1 = 0x3;
P1 = 0x2;
counter++;
ShiftCounter++;
}
if (P0 == 253 && counter == 0){
P3 = arr[6];
P1 = 0x3;
P1 = 0x2;
counter++;
ShiftCounter++;
}
if (P0 == 251 && counter == 0){
P3 = arr[3];
P1 = 0x3;
P1 = 0x2;
counter++;
ShiftCounter++;
}
if (P0 == 247 && counter == 0){
P3 = arr[14];
P1 = 0x3;
P1 = 0x2;
counter++;
ShiftCounter++;
}



P2 = 14;
if (P0 == 254 && counter == 0){
P3 = arr[11];
P1 = 0x3;
P1 = 0x2;
counter++;
ShiftCounter++;
}
if (P0 == 253 && counter == 0){
P3 = arr[12];
P1 = 0x3;
P1 = 0x2;
counter++;
ShiftCounter++;
}
if (P0 == 251 && counter == 0){
P3 = arr[13];
P1 = 0x3;
P1 = 0x2;
counter++;
ShiftCounter++;
}
if (P0 == 247 && counter == 0){
P3 = arr[15];
P1 = 0x3;
P1 = 0x2;
counter++;
ShiftCounter++;
}
counter = 0;

}
}
