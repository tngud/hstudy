#include <stdio.h>
#include <string.h>
void strmov(char* dst, int n)
{
	int i, len;
	len = strlen(dst);
	for (i = 0; i <= len; ++i)
		dst[i + n - 1] = dst[i + n];
}

int main(void)
{
	char a[1000][80];
	int num, i, j;
	scanf("%d", &num);

	for (j = 0; j < num; ++j) {
		scanf("%d", &i);
		scanf("%s", &a[j]);
		strmov(a[j], i);
	}
	printf("\n");
	for (j = 0; j < num; ++j) {
		printf("%d %s\n", j + 1, a[j]);
	}

	return 0;
}