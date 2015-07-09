/**********************************************************
 * Author        : oyjb
 * Email         : jbouyang@126.com
 * Last modified : 2015-07-02 19:03
 * Filename      : format1.c
 * Description   : copy right for oyjb
 * *******************************************************/
#include <stdio.h>

int main()
{
	int num = 0x61616161;
	printf("before : num = %#x \n",num);
	printf("%20d%n\n",num,&num);
	printf("after : num = %#x \n",num);
	return 0;
}
