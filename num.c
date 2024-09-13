// chp1/nums.c
#include <stdio.h>
#include <limits.h> // �ִ� ��/�ּ� �� �� ��

int main(void)
{
	// char
	char ch = 'A';
	printf("char:\n");
	printf("Value: %c\n", ch);
	printf("Max: %d\n", CHAR_MAX); // limit�� ��� ���
	printf("Min: %d\n", CHAR_MIN);

	// signed short int
	signed short int sshort = 1234;
	printf("\nsigned short int:\n");
	printf("Value: %d\n", sshort);
	printf("Max: %d\n", SHRT_MAX); // limit�� ��� ���
	printf("Min: %d\n", SHRT_MIN);

	// unsigned short int
	unsigned short int ushort = 1234U;
	printf("\nunsigned short int:\n");
	printf("Value: %u\n", ushort);
	printf("Max: %u\n", USHRT_MAX); // limit�� ��� ���

	// signed int
	signed int sint = 12345;
	printf("\nsigned int:\n");
	printf("Value: %d\n", sint);
	printf("Max: %d\n", INT_MAX); // limit�� ��� ���
	printf("Min: %d\n", INT_MIN);

	// unsigned int
	unsigned int uint = 12345U;
	printf("\nunsigned int:\n");
	printf("Value: %u\n", uint);
	printf("Max: %u\n", UINT_MAX); // limit�� ��� ���

	// signed long int
	signed long int slong = 123456789L;
	printf("\nsigned long int:\n");
	printf("Value: %ld\n", slong);
	printf("Max: %ld\n", LONG_MAX); // limit�� ��� ���
	printf("Min: %ld\n", LONG_MIN);

	// unsigned int
	unsigned long int ulong = 123456789UL;
	printf("\nunsigned long int:\n");
	printf("Value: %lu\n", ulong);
	printf("Max: %lu\n", ULONG_MAX); // limit�� ��� ���

	return 0;
}