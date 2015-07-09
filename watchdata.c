/**********************************************************
 * Author        : oyjb
 * Email         : jbouyang@126.com
 * Last modified : 2015-07-04 17:13
 * Filename      : watchdata.c
 * Description   : copy right for oyjb
 * *******************************************************/
#include <stdio.h>
#include <string.h>

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
