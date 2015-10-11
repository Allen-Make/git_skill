#include "stdio.h"

unsigned char adc1[4] = {0x40,0x20,0x31,0x36};
unsigned char adc2[4] = {0x3F,0xA6,0xB0,0xD1};
unsigned char adc3[4] = {0x40,0x56,0x8D,0x69};
unsigned char adc4[4] = {0x40,0x56,0x16,0x95};


//4字节16进制数转换为float
	float H_to_float(unsigned char h[])
	{
	unsigned char *p=NULL,i;
	float s=0;
	p=(unsigned char *)&s;
	for(i=0;i<4;i++)
	 *(p+i)=h[3-i];
	return s;
}

int main(){

	printf("adc1 = %f\r\n adc2 = %f\r\n adc3 = %f\r\n adc4 = %f\r\n",H_to_float(adc1),H_to_float(adc2),H_to_float(adc3),H_to_float(adc4));

	return 1;
}
