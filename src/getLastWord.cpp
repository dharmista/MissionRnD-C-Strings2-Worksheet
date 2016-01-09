/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

int strLength(char * a){
	if (a == NULL)
		return 0;
	int len = 0;
	while (a[len] != '\0')
		len++;
	return len;
}

char * get_last_word(char * str){/*
	//-----------------------MULTI POINTER---------------------------
	int ptr1=0, ptr2=0;
	bool compl = false;
	char * ans = NULL;
	while (!compl){
		while (str[ptr1] != ' ' || str[ptr1]=='\0')
			ptr1++;
		if (str[ptr1] != '\0')
			ptr2 = ptr1;
	}
	ans = (char *)malloc(sizeof(char)*(ptr2 - ptr1 + 1));
	for (int i = ptr1; i <= ptr2; i++){
		ans[ptr1 - i] = str[i];
	}
	return ans;*/
	//-----------------------SINGLE POINTER STARTING FROM BACK-----------------------
	char * ans = NULL;
	int len = strLength(str);
	int last_ptr = len - 1;
	while (str[last_ptr] == ' ')
		last_ptr--;
	int temp_ptr = last_ptr;
	while (str[temp_ptr - 1] != ' ' && temp_ptr>0)
		temp_ptr--;
	ans = (char *)malloc(sizeof(char)*(last_ptr - temp_ptr + 1));
	for (int i = temp_ptr; i <= last_ptr; i++){
		ans[i - temp_ptr] = str[i];
	}
	ans[last_ptr - temp_ptr + 1] = '\0';
	return ans;
}
