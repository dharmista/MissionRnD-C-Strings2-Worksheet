/*
OVERVIEW: Given a string, Return the substring of the main string from i index to j index
Indexes start from 0,ith letter and jth letter are included
E.g.: Input: "get_sub_string("abcdefgh",2,5) , Output: "cdef"

INPUTS: A string.

OUTPUT: return substring from [i,j]

INPUT2: I will Code for Mission RnD , 2,10
OUTPUT2:will Code

NOTES: Check Null Strings ,Include stddef for NULL if needed.Create a New string and return it ,dont modfiy
original String
*/

#include <stddef.h>
#include <stdlib.h>

int stringLength1(char * str){
	if (str == NULL)
		return 0;
	int len = 0;
	while (str[len] != '\0')
		len++;
	return len;
}

char * get_sub_string(char *str, int i, int j){
	char * ans = NULL;
	if (i <= j){
		int len = stringLength1(str), k;
		if (i < len && j < len){
			ans = (char*)malloc(sizeof(char)*(j - i + 1));
			for (k = i; k <= j; k++){
				ans[k - i] = str[k];
			}
			ans[k - i] = '\0';
		}
	}
	return ans;
}