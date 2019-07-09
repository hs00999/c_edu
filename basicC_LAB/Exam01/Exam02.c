/***********************************************************/
// [8-1] 전역변수와 extern
/***********************************************************/

#if 0
#include <stdio.h>

extern int a;
int b = 20;

void func(void)
{
	a++;
	b++;

	printf("a=%d\n", a);
	printf("b=%d\n", b);
}
#endif

/***********************************************************/
// [8-2] 지역변수와 extern
/***********************************************************/

#if 0
#include <stdio.h>

int b = 20;

void func(void)
{
	extern int a;

	a++;
	b++;
	printf("a=%d\n", a);
	printf("b=%d\n", b);
}
#endif

/***********************************************************/
// [8-3] 전역변수와 static
/***********************************************************/

#if 0
#include <stdio.h>

extern int a;
static int b = 20;
static int c = 30;

void func(void)
{
	a++;
	b++;
	c++;

	printf("a=%d\n", a);
	printf("b=%d\n", b);
	printf("c=%d\n", c);
}
#endif
