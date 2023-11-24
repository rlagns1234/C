#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char str[50] = "";
	printf("Input> ");
	scanf("%[^\n]s", str);
	char out[50] = "";
	for (int i = 0; str[i] != '\0'; i++) {
		char s;
		if (str[i] <= 90 && str[i] >= 65) {
			s = str[i] + 32;
		}
		else if (str[i] <= 122 && str[i] >= 97) {
			s = str[i] - 32;
		}
		else {
			s = str[i];
		}
		sprintf(out, "%s%c", out, s);
	}
	printf("Output> %s", out);
}