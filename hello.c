#include <stdio.h>

int main(void) {
	char name[] = "Aaron";
	float age = 43.5;

	printf("Hello~, my name is %s.\n", name);
	printf("\tI am %.1f years old.\n\n", age);

	return 0; // 0: 양수 / 1: 음수
}