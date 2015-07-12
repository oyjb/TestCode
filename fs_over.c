/*---------vul_format3.c---------*/
#include <stdio.h>

void function(char *str)
{
    char buffer2[512];
	char buffer1[512];
    sprintf(buffer1,"ERR_Wrong command : %400s\n",str);
	sprintf(buffer2,buffer1);
}

int main(int argc,char *argv[])
{
	function(argv[1]);
	
	return 0;
}
