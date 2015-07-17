/*---------vul_format5.c---------*/
#include <stdio.h>
#include <stdlib.h>

void function(int n)
{
	unsigned char buff[2];
	
	printf("%55d%n",n,(int *)(buff+14));
	
	printf("%133d%n",n,(int *)(buff+15));
	
	printf("%4d%n",n,(int *)(buff+16));
	
	printf("%8d%n\n",n,(int *)(buff+17));
}

int main()
{
	int a = 1;
	
	function(2);
	
	a = 0;
	
	printf("a = %d\n",a);

	return 0;
}

void shellcode()
{
    printf("Format String Attack!\n");
    
    exit(0);
}



