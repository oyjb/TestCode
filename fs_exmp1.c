/**********************************************************
 * Author        : oyjb
 * Email         : jbouyang@126.com
 * Last modified : 2015-07-06 14:26
 * Filename      : fs_exmp1.c
 * Description   : copy right for oyjb
 * *******************************************************/
#include <stdio.h>
void f(int x)
{
	printf("Look at the stack : %d  %#x  %#x\n",x);
}
int main()
{
	f(2);
	return 0;
}
