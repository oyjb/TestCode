/**********************************************************
 * Author        : oyjb
 * Email         : jbouyang@126.com
 * Last modified : 2015-07-04 16:38
 * Filename      : vul_format.c
 * Description   : copy right for oyjb
 * *******************************************************/
#include <stdio.h>

int main(int argc,char *argv[])
{
	int count = 1;
	while (argc > 1)
	{
		/* Vulnerable place
		 * if replaced by printf("%s",argv[count]),there no vulnerability.
		 */
		printf(argv[count]);
		//printf("%s",argv[count]);
		
		printf(" ");
		++count;
		--argc;
	}
	printf("\n");
	return 0;
};
