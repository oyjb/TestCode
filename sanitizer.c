/**********************************************************
 * Author        : oyjb
 * Email         : jbouyang@126.com
 * Last modified : 2015-07-16 10:09
 * Filename      : sannitizer.c
 * Description   : copy right for oyjb
 * *******************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <sanitizer/dfsan_interface.h>
#include <assert.h>

int main()
{
	int i = 1;
	dfsan_label i_label = dfsan_create_label("i",0);
	dfsan_set_label(i_label,&i,sizeof(i));

	int j = 2;
	dfsan_label j_label = dfsan_create_label("j",0);
	dfsan_set_label(j_label,&j,sizeof(j));

	int k = 3;
	dfsan_label k_label = dfsan_create_label("k",0);
	dfsan_set_label(k_label,&k,sizeof(k));

	dfsan_label ij_label = dfsan_get_label(i + j);
	assert(dfsan_has_label(ij_label,i_label));
	assert(dfsan_has_label(ij_label,j_label));
	assert(dfsan_has_label(ij_label,k_label));

	dfsan_label ijk_label = dfsan_get_label(i + j + k);
	assert(dfsan_has_label(ijk_label,i_label));
	assert(dfsan_has_label(ijk_label,j_label));
	assert(dfsan_has_label(ijk_label,k_label));

	return 0;
}
