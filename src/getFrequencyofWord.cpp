/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int stringLength2(char * str){
	if (str == NULL)
		return 0;
	int len = 0;
	while (str[len] != '\0')
		len++;
	return len;
}

bool stringCmp(char * str, char * TBC, int wordLen){
	for (int i = 0; i < wordLen; i++){
		if (str[i] != TBC[i])
			return false;
	}
	return true;
}

int count_word_in_str_way_1(char *str, char *word){
	int count = 0, wordLen = stringLength2(word), strLen = stringLength2(str);
	//-----------FOR LOOP------------
	for (int i = 0; i < strLen; i++){
		if (stringCmp((str + i), word, wordLen))
			count++;
	}
	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word, int * count){
	int strLen = stringLength2(str), wordLen = stringLength2(word);
	if (str[0] == '\0'){
		return *count;
	}
	else{
		if (stringCmp(str, word, wordLen))
			*count += 1;
		return count_word_int_str_way_2_recursion((str + 1), word, count);
	}
	return 0;
}

