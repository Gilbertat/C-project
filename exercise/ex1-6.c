#include <stdio.h>

void test(void);

int main(int argc, char *argv[])
{
	test();
	
	return 0;
}
void test(void)
{
	int c;
	while (c = getchar() != EOF) {
		printf("%d\n",c);
	}
	printf("%d - at EOF\n",c);
}