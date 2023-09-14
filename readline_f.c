#include <stdio>
#include <stdlib.h>
/* 
 * Reads the line and prints back the texe
 *
 * Return: int
 */

int main(void)
{
	 size_t n;
	 char *buf = NULL;
	 printf("$");
	 getline(&buf, &n, stdin);
	 printf("%s", buf);
	 free(buf);
	 return (0);
}
