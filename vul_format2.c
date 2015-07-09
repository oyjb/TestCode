/**********************************************************
 * Author        : oyjb
 * Email         : jbouyang@126.com
 * Last modified : 2015-07-09 18:33
 * Filename      : vul_format2.c
 * Description   : copy right for oyjb
 * *******************************************************/
#include <stdio.h>

int main()
{
	int num = 0x61616161;
	/*before write*/
	printf("before : num = %#x \n",num);

	/*use %n write to num*/
	printf("AAAAAAAAAAAAAAAAAAAA%n\n",&num);
	/*after above printf*/
	printf("after1 : num = %#x\n",num);

	/*use %xn write to num*/
	printf("%40d%n\n",num,&num);
	/*after above printf*/
	printf("after2 : num = %#x\n",num);

	return 0;
}
