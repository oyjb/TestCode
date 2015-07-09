/**********************************************************
 * Author        : oyjb
 * Email         : jbouyang@126.com
 * Last modified : 2015-07-09 18:42
 * Filename      : vul_format3.c
 * Description   : copy right for oyjb
 * *******************************************************/
#include <stdio.h>
#include <string.h>

/*malFunction*/
void malfunc()
{
	printf("format string attack!");
}

void f(char *str)
{
	char buff[256];

	//set memory zero
	memset(buff,0,sizeof(buff));

	//copy str to buff
	strncpy(buff,str,sizeof(buff)-1);

	//Vulnerablt place
	printf(buff);
}

int main(int argc,char *argv[])
{
	f(argv[1]);

	printf("\n");

	return 0;
}
