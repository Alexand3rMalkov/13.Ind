#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

main() {
	system("chcp 1251");
	char s[100];  
	int i, index, maxLen, count, len; 
	printf("Введите строку:\n"); 
	fgets(s, 100, stdin); 
	len = strlen(s);
	maxLen = 0; 
	index = 0; 
	count = 0;
	for (i = 0; i < len; i++)  
		if (s[i] != ' ') count += 1; 
		else {
			if (count > maxLen) {
				maxLen = count;
				index = i - count;
			}
			count = 0;
		}

	if (count > maxLen) {  
		maxLen = count;
		index = i - count;
	}
	maxLen += index; 
	printf("Самое длинное слово:\n"); 
	for (i = index; i < maxLen; i++) 
		putchar(s[i]);
}
