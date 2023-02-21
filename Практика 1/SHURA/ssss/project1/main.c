
#include <8051.h> 

void main() 

{
int i;
char xdata *ptr; 

char test, nabor;
nabor = 0x0AA;  
ptr = (char xdata *) 0x680;  

for(i=0; i<1024;i++) 

{
*ptr=nabor; 

test=*ptr;  

if(test!=nabor)
{
break;  

}
ptr++;
}
}