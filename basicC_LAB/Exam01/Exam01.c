#pragma warning (disable:4996)

/***********************************************************/
// [실습0] 컴파일러 확인
/***********************************************************/
#if 0
#include <stdio.h>

void main(void)
{
	printf("Welcome!");
}
#endif

/***********************************************************/
// [1-1]  printf 함수로 모니터에 인쇄하기
/***********************************************************/
#if 0
#include <stdio.h>

void main(void)
{
	printf(              );
}
#endif

/***********************************************************/
// [심화1-1]  줄 바꾸기 (\n 활용)
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	
}
#endif	

/***********************************************************/
// [심화1-2]  특수 기능 문자의 인쇄 
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	printf("Hello C\n");
	printf("Return\rSa");
	printf("\nTab\tTab\n");
	printf("Back!\bBack!");
	printf("\nCharacter\0Ghost");
}
#endif

/***********************************************************/
// [1-2]  진법 변환 인쇄
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	printf("10진수 => %d\n", 100);
	printf("16진수 => %x와 %X\n", 0xF0, 0xF0);
	printf("8진수 => %o\n", 034);
	printf("%d, %#x, %#o\n", 100, 100, 100);
}
#endif

/***********************************************************/
// [1-3] 여러 가지 타입을 인쇄하는 format 지시자
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	printf("%u, %d\n", 100u, -100);
	printf("%#X, %#x, %#o\n", 0xF3, 0xFABC, 0144);
	printf("%llu, %lld\n", 100ULL, -100LL);
}
#endif

/***********************************************************/
// [1-4] 문자의 인쇄
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	printf("%c %c %c\n", 65, 0x41, 0101);
	printf("%d %d\n", '1', 1);
	printf("%d %d %d\n", '0' -'0', 'C' - 'A', '3' - '1');
}
#endif

/***********************************************************/
// [1-5] 문자열의 정체와 %s의 동작
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	printf("%c%c%c%c%c\n", 'H', 'e', 'l', 'l', 'o');
	printf("%s\n", "Hello");
	printf("%s\n", "Hel\0lo");
}
#endif

/***********************************************************/
// [1-6] 실수의 인쇄
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	printf("float: %f, double: %f, long double %Lf\n", 3.14f, 3.14, 3.14L);
	printf("float: %.16f, double: %.16f\n", 3.14f, 3.14);
	printf("long double %.16Lf\n", 3.14L);
	printf("%.5f, %.5f, %.5f\n", 12.123, 12345.12345678, 12345.12345123);

	printf("float: %e, double: %e, long double %Le\n", 3.14f, 3.14, 3.14L);
	printf("float: %.16e, double: %.16e\n", 3.14f, 3.14);
	printf("long double %.16Le\n", 3.14L);
	printf("%.5e, %.5e, %.5e\n", 12.123, 12345.12345678, 12345.12345123);
}
#endif


/***********************************************************/
// [2-1] 변수 선언이 가능한 위치
/***********************************************************/

#if 0
#include <stdio.h>

int Global1;
int Global2 = 10;
int Global3 = 10 * 2;

Global1 = 5;

void main(void)
{
	int local1;
	int local2 = 20;
	int local3 = Global1 + local2 + 2;

	Global1 = local2;
	local1 = 30;
	printf("%d %d %d\n", Global1, Global2, Global3);
	printf("%d %d %d\n", local1, local2, local3);

	int local5 = 100;

	printf("%d\n", local5);

	{
		int local6 = local3;
		printf("%d\n", local3);
	}
}
#endif

/***********************************************************/
// [2-2] 변수 초기화와 메모리
/***********************************************************/

#if 0
#include <stdio.h>

int a = 10;
int b;
int c = 5;

void main(void)
{
	int c = 20;
	printf("%d %d %d\n", a, b, c);
	{
		int b = 30;
		printf("%d %d %d\n", a, b, c);
		printf("%d %d %d %d\n", a, b, c, d);
	}
}
#endif

/***********************************************************/
// [2-3] 실수 변수 선언과 초기화
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	float a = 3.14f;
	double b = 3.25e-2;
	long double c = -7.125L;

	printf("a = %e, b = %f, c = %lf\n", a, b, c);

}
#endif


/***********************************************************/
// [2-4] 변수의 실제 위치
/***********************************************************/

#if 0
#include <stdio.h>

int x1 = 10;
int x2 = 20;

void main(void)
{
	int y1 = 100;
	int y2 = 200;

	printf("%d %d %d %d\n", x1, x2, y1, y2);
	printf("%#.8x %#.8x\n%#.8x %#.8x\n", &x1, &x2, &y1, &y2);
}
#endif


/***********************************************************/
// [2-5] 변수의 메모리 크기
/***********************************************************/

#if 0
#include <stdio.h>

char c;
short s;
int i;
long int l;
long long int ll;
float f;
double d;
long double ld;

void main(void)
{
	printf("char : %d\n", sizeof(c));
	printf("short : %d\n", sizeof(s));
	printf("int : %d\n", sizeof(i));
	printf("long int : %d\n", sizeof(l));
	printf("long long int : %d\n", sizeof(ll));
	printf("float : %d\n", sizeof(f));
	printf("double : %d\n", sizeof(d));
	printf("long double : %d\n", sizeof(ld));

	printf("%d %d\n", sizeof(i), sizeof(int));
	printf("%d %d\n", sizeof(&i), sizeof(10));
	printf("%d %d\n", sizeof 10u, sizeof 3.14);
}
#endif

/***********************************************************/
// [2-6] 변수의 추적
/***********************************************************/

#if 0
#include <stdio.h>

int gi = 2;
char gc;

void main(void)
{
	char lc = 4;
	int li;

	gc = lc + 2;
	li = gi - 1;
	printf("%d, %d, %d, %d\n", gc, lc, gi, li);
}
#endif

/***********************************************************/
// [3-1] 메모리 덤프 및 분석 연습
/***********************************************************/

#if 0
#include <stdio.h>
int gi = 2;
short gs = 10;
char gc;

void main(void)
{
	char lc = 4;
	short ls = 20;
	int li;

	gc = lc + 2;
	li = gi - 1;
	ls = gs + 1;

	printf("%d, %d\n", gi, li);
	printf("%d, %d\n", gs, ls);
	printf("%d, %d\n", gc, lc);
}
#endif

/***********************************************************/
// [3-2] printf 친구 scanf
/***********************************************************/

#if 0
//#define _CRT_SECURE_NO_WARNINGS  
//#define _CRT_SECURE_NO_DEPRECATE  
#pragma warning (disable:4996)
#include <stdio.h>

void main(void)
{
	int i;
	printf("Input:");
	scanf("%d", &i);
	printf("Your choice: %d\n", i);
}
#endif

/***********************************************************/
// [3-3] 여러개의 숫자를 입력받는 scanf
/***********************************************************/

#if 0
#pragma warning (disable:4996)
#include <stdio.h>

void main(void)
{
	for (; ; )
	{
		int i, j, k;

		printf("Input(i j k):");
		scanf("%d%d%d", &i, &j, &k);
		printf("Your choice is: i=%d j=%d k=%d\n", i, j, k);
		printf("\nEXIT => CTRL+C\n\n");
	}
}
#endif

/***********************************************************/
// [3-4] fflush 함수의 기능
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	for (; ; )
	{
		int i, j, k;

		printf("Input(i j k):");
		scanf("%d%d%d", &i, &j, &k);
		fflush(stdin);
		printf("Your choice is: i=%d j=%d k=%d\n", i, j, k);
		printf("\nEXIT => CTRL+C\n\n");
	}
}
#endif

/***********************************************************/
// [3-5] 여러개의 문자를 입력받는 scanf
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	for (; ; )
	{
		char a, b;

		printf("Input(2글자):");
		scanf("%c %c", &a, &b);
		//scanf("%c %c", &a, &b);
		//fflush(stdin);
		//while (getchar() != '\n');

		printf("Your choice is: %c%c", a, b);
		printf("\nEXIT => CTRL+C\n\n");
	}
}
#endif

/***********************************************************/
// [3-6] 문자열을 입력받는 scanf
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	for (; ; )
	{
		char a[100];

		printf("Input(100글자 미만 문자열):");
		scanf("%s", a);
		//fflush(stdin);
		while (getchar() != '\n');

		printf("Your choice is: %s", a);
		printf("\nEXIT => CTRL+C\n\n");
	}
}
#endif

/***********************************************************/
// [심화3-1] 소문자를 대문자로 변환하여 출력하기
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	char sm;
	scanf("%c", &sm);
	printf("%c", 'A' + sm -'a');

}
#endif

/***********************************************************/
// [4-1] 사칙연산
/***********************************************************/
#if 0
#include <stdio.h>

void main(void)
{
	int a = 10, b = 4, c = 123;

	printf("a + b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("a * b = %d\n", a * b);
	printf("a / b = %d\n", a / b);
	printf("a %% b = %d\n", a % b);
	printf("%d %d %d\n", c / 100, c / 10 % 10, c % 10);
}
#endif



/***********************************************************/
// [4-2] 대입 연산
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 0x12345678;  // 정상 대입
	unsigned char b;

	b = a;	// 작은 메모리로 대입
	printf("a = %#.8x, b = %#.8x\n", a, b);
	a = b;	// 큰 메모리로 대입
	printf("a = %#.8x, b = %#.8x\n", a, b);
}
#endif

/***********************************************************/
// [4-3] 연산자 우선순위
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 10;
	int b = 20;
	int c;

	c = +a - -b;
	printf("c = %d\n", c);

	c = sizeof(a) + -b;
	printf("c = %d\n", c);
}
#endif

/***********************************************************/
// [4-4] 사칙연산의 우선순위
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 10;
	int b = 20;
	int c1, c2, c3, c4;

	c1 = a + b * 2;
	c2 = a * b / 2 % 4;
	c3 = -a * 2 + b / 4;
	c4 = a * ((2 + -b) / 4);

	printf("%d %d %d %d\n", c1, c2, c3, c4);
}
#endif

/***********************************************************/
// [4-5] 대입연산의 우선순위
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 20, b, c, d;

	a = b = c = d = 10;

	printf("%d %d %d %d\n", a, b, c, d);
}
#endif



/***********************************************************/
// [4-6] 복합대입 연산자
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 20, b = 4;

	a += 3;			printf("%d\n", a);
	a -= b;			printf("%d\n", a);
	a *= b + 2;		printf("%d\n", a);
	a /= a - b + 1;	printf("%d\n", a);
	a %= b -= 3;	printf("%d\n", a);
}
#endif

/***********************************************************/
// [4-7] 다른 타입간 사칙연산
/***********************************************************/

#if 0
#include<stdio.h>

void main(void)
{
	int ia, ib;
	float fa, fb;
	char ca = 'b', cb = 'B';

	ia = 5 / 3;
	ib = 5 % 3;

	fa = 5 / 3;
	fb = 5.f / 3.f;

	ca = ca + 1;
	cb = cb - 1;

	printf("int   ia = %d, ib = %d\n", ia, ib);
	printf("float fa = %f, fb = %f\n", fa, fb);
	printf("char  ca = %c, cb = %c\n", ca, cb);
}
#endif


/***********************************************************/
// [4-8] ++, -- 증가, 감소 연산자
/***********************************************************/

#if 0
#include<stdio.h>

void main(void)
{
	int a = 10, b;
	a++;	 		printf("%d\n", a);
	++a; 			printf("%d\n", a);
	b = ++a;		printf("a=%d, b=%d\n", a, b);
	b = a++;		printf("a=%d, b=%d\n", a, b);
}
#endif

/***********************************************************/
// [4-9] 비트 연산자
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int num, setbit, clearbit;
	scanf("%X %d %d", &num, &setbit, &clearbit);
	printf("%#X\n", num | 1 << setbit);
	printf("%#X\n", num & ~(1 << clearbit));
}
#endif

/***********************************************************/
// [5-1] 함수의 호출
/***********************************************************/

#if 0
#include <stdio.h>

void no_op(void)
{
}

void welcome(void)
{
	printf("Hello!\n");
}

void print_weight(int weight)
{
	printf("Weight = %d\n", weight);
}

int Get_My_Weight(void)
{
	int weight = 70;
	return weight;
}

int add(int a, int b)
{
	int c;
	c = a + b;
	return c;
}

void main(void)
{
	int r, x = 50, a = 3, b = 5;

	no_op();
	welcome();
	printf("My Weight = %dkg\n", Get_My_Weight() + 10);
	print_weight(x);
	r = add(a, b);
	printf("add = %d\n", r);
}
#endif

/***********************************************************/
// [5-2] argument 전달
/***********************************************************/

#if 0
#include <stdio.h>

int add(int a, int b)
{
	int c;
	c = a + b;
	return c;
}

void main(void)
{
	int r;
	int x = 50, a = 3, b = 5;

	printf("add = %d\n", add(3, 5));

	printf("add = %d\n", add(a, b));

	r = add(x + 2, a);
	printf("add = %d\n", r);
}
#endif

/***********************************************************/
// [5-3] 지역변수의 유효 범위
/***********************************************************/

#if 0
#include <stdio.h>

int add(int a, int b)
{
	int c;

	a++;
	b++;
	c = a + b;
	printf("add: %d %d %d\n", a, b, c);
	return c;
}

void main(void)
{
	int r;
	int a = 3, b = 5, c = 100;

	printf("main: %d %d %d\n", a, b, c);
	r = add(a, b);
	printf("add() = %d\n", r);
	printf("main: %d %d %d\n", a, b, c);
}
#endif

/***********************************************************/
// [5-4] 함수의 위치
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	weight(50);
}

void weight(int w)
{
	printf("Weight = %d Kg\n", w);
}
#endif

/***********************************************************/
// [5-5] 함수의 선언
/***********************************************************/

#if 0
#include <stdio.h>

// 여기에 함수 선언

void main(void)
{
	weight(50);
}

void weight(int w)
{
	printf("Weight = %d Kg\n", w);
}
#endif

/***********************************************************/
// [5-6] 함수의 호출 => 인수의 전달
/***********************************************************/

#if 0
#include <stdio.h>

void func(char x)
{
	printf("x = %#.8x\n", x);
}

void main(void)
{
	int a = 0x12345678;
	func(a);
}
#endif

/***********************************************************/
// [5-7] 함수의 호출 => 리턴의 활용 전달
/***********************************************************/

#if 0
#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

void main(void)
{
	int a = 0x12345678;
	int b = 0x87654321;
	unsigned char r;

	r = add(a, b);
	printf("return=%#.8x\n", r);

	add(a, b);
}
#endif



/***********************************************************/
// [5-8] 지역변수에 스택의 활용
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int  a = 0x12345678;
	char b = 0x75;
	int  c = 0xABCDEF01;

	printf("%#p, %#p, %#p\n", &a, &b, &c);
	printf("%#.8x, %#.8x, %#.8x\n", a, b, c);
}
#endif

/***********************************************************/
// [5-9] 지역변수의 독립성과 스택의 운용
/***********************************************************/

#if 0
#include <stdio.h>

int add(int a, int b)
{
	int c;
	c = a + b;
	return c;
}

void main(void)
{
	int c, a = 3, b = 4;
	c = add(b, a);
	printf("%d\n", c);
}
#endif

/***********************************************************/
// [5-10] 전역변수의 메모리 저장과 변수 은닉
/***********************************************************/

#if 0
#include <stdio.h>

int a = 10;
int b;
int c = 20;

void main(void)
{
	int a = 5;
	int b = 7;

	c = a + b + 100;

	printf("%d, %d, %d\n", a, b, c);
}
#endif

/***********************************************************/
// [심화5-1] 엔화를 한화로 변환해 주는 함수 작성하기
/***********************************************************/

#if 0
#include <stdio.h>
int yentowon(unsigned int yen){
	double won = 10.10;
	return yen * won;
}
void main(void)
{
	int num;
	scanf("%d", &num);
	if(1 > num || 10000000 < num) printf("out of boundary");
	else
		printf("%d",yentowon(num));
}
#endif

/***********************************************************/
// [심화5-2] float에 가장 가까운 정수 값 찾기
/***********************************************************/

#if 0
#include <stdio.h>

int ftoi(float num){
	float b;
	b = num - (int)num;
	if(b >= 0.5) return num+1;
	else return num;
}

void main(void)
{
	float a;
	scanf("%f", &a);
	
	printf("%d",ftoi(a));

}
#endif

/***********************************************************/
// [심화5-3] 조 편성 함수 작성하기
/***********************************************************/

#if 0
#include <stdio.h>
int make(int a){
	if(a%4 == 0) return 1;
	else if(a%4 == 1) return 2;
	else if(a%4 == 2) return 3;
	else return 4;

}

void main(void)
{
	int num;
	scanf("%d", &num);

	printf("%d", make(num));
}
#endif

/***********************************************************/
// [5-11] 손파일링 연습 – 전역변수 은닉
/***********************************************************/

#if 0
#include <stdio.h>

int a = 10;
int b;
int c = 20;

void f2(void)
{
	int a = 100;

	printf("%d %d %d\n", a, b, c);
}

void f1(void)
{
	int a = 50;
	int b = 500;

	f2();
	printf("%d %d %d\n", a, b, c);
}

void main(void)
{
	int c = 1000;

	f1();
	printf("%d %d %d\n", a, b, c);
}
#endif

/***********************************************************/
// [5-12] 손파일링 연습 – 지역변수의 유효 범위
/***********************************************************/

#if 0
#include <stdio.h>

int a = 1;
int b;
int c = 2;

void main(void)
{
	int a = 100;
	{
		int a = 20;
		int b = 10;
		{
			int c = 5;

			printf("%d %d %d\n", a, b, c);
		}
		printf("%d %d %d\n", a, b, c);
	}
	printf("%d %d %d\n", a, b, c);
}
#endif

/***********************************************************/
// [5-13] 손파일링 연습 – 인수 전달과 리턴
/***********************************************************/

#if 0
#include <stdio.h>

int a = 1;
int b;
int c = 2;

int f2(int a, int b)
{
	int c = a + b % 2;
	return c * 3;
}

int f1(int a, int x)
{
	int d = 13;
	c = d + a - x;
	return b = f2(b = c + d, a) + 1;
}

void main(void)
{
	int b = 10;
	int x = 3;
	int d = f1(x, a);

	printf("%d %d %d %d\n", a, b, c, d);
	f2(b, a = x + 1);
	printf("%d %d %d %d\n", a, b, c, d);
}
#endif

/***********************************************************/
// [6-1] if 문, else 문
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	if (1)	printf("True\n");
	if (0)	printf("False\n");

	if (-1)	printf("True\n");
	else	printf("False\n");
}
#endif


/***********************************************************/
// [6-2] 비교 연산자의 사용
/***********************************************************/

#if 0
#include <stdio.h>

int compare(int num)
{
	if(num%2==0) return 2;
	else if(num%3==0) return 3;
	else if(num%5==0) return 5;
	else return 0;
}

void main(void)
{
	printf("3 => %d\n", compare(3));
	printf("62 => %d\n", compare(62));
	printf("25 => %d\n", compare(25));
	printf("157 => %d\n", compare(157));
}
#endif

/***********************************************************/
// [6-3] else if
/***********************************************************/

#if 0
#include <stdio.h>

int compare(int num)
{
	int r = 0;

	if ((num % 2) == 0) r = 2;
	else
		if ((num % 3) == 0) r = 3;
		else
			if ((num % 5) == 0) r = 5;

	return r;
}

void main(void)
{
	printf("3 => %d\n", compare(3));
	printf("62 => %d\n", compare(62));
	printf("25 => %d\n", compare(25));
	printf("157 => %d\n", compare(157));
}
#endif

#if 0
#include <stdio.h>

int compare(int num)
{
	int r = 0;

	if ((num % 2) == 0) r = 2;
	else if ((num % 3) == 0) r = 3;
	else if ((num % 5) == 0) r = 5;
	return r;
}

void main(void)
{
	printf("3 => %d\n", compare(3));
	printf("62 => %d\n", compare(62));
	printf("25 => %d\n", compare(25));
	printf("157 => %d\n", compare(157));
}
#endif

/***********************************************************/
// [심화6-1] 짝수 홀수 판단 함수 설계
/***********************************************************/

#if 0
// 짝수이면 2, 홀수이면 1을 리턴한다

#include <stdio.h>

int Check_Odd_Even(int num)
{
	if(num%2==0) return 0;
	else return 1;
}
void main(void)
{
	printf("3 => %d\n", Check_Odd_Even(3));
	printf("62 => %d\n", Check_Odd_Even(62));
	printf(" => %d\n", Check_Odd_Even(157));
}
#endif

/***********************************************************/
// [6-4] ! 연산자
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 3;

	if (!1)	printf("!1 : True\n");
	if (!0)	printf("!0 : True\n");
	if (!(a == 3)) printf("!(a == 0) : True\n");
	if (!a == 0) printf("!a == 0 : True\n");
	if (!(a + 3)) printf("!(a + 3) : True\n");

	if (a = 3) printf("True\n");
	else printf("False\n");
}
#endif


/***********************************************************/
// [6-5] 복합문
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 3;

	if (a > 3) printf("True\n"); a++;
	if (a == 4) printf("Bingo!\n");
}
#endif

#if 0
#include <stdio.h>

void main(void)
{
	int a = 3;

	if (a > 3) { printf("True\n"); a++; }
	if (a == 4) printf("Bingo!\n");
}
#endif


/***********************************************************/
// [6-6] 논리곱 연산
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 4, b = 0;
	if (a == 5 && b = 3) b++;
	printf("%d\n", b);
}
#endif

/***********************************************************/
// [6-7] 논리곱 연산의 수정
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 4, b = 0;
	if ((a == 5) && (b = 3)) b++;
	printf("%d\n", b);
}
#endif

/***********************************************************/
// [6-8] 3의 배수 또는 5의 배수 찾기
/***********************************************************/

#if 0
#include <stdio.h>

int f1(int num)
{
	if (!(num % 3) || !(num % 5)) return 1;
	return 0;
}

void main(void)
{
	int num;
	scanf("%d", &num);
	printf("%s", (f1(num) ? "YES" : "NO"));
}
#endif

/***********************************************************/
// [6-9]  4~10 사이 숫자 찾기
/***********************************************************/

#if 0
#include <stdio.h>

int f1(int num)
{
	return (num >= 4 && num <= 10);
}

void main(void)
{
	int num;
	scanf("%d", &num);
	printf("%s", (f1(num) ? "YES" : "NO"));
}
#endif


/***********************************************************/
// [6-10] 조건 연산자
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 10, b = 20, c;

	c = if (b < 5) a; else b;

	printf("%d\n", c);
}
#endif

#if 0
#include <stdio.h>

void main(void)
{
	int a = 10, b = 20, c;

	c = (b < 5) ? a : b;

	printf("%d\n", c);
}
#endif

/***********************************************************/
// [심화6-2] 소문자 f ~ z 찾기
/***********************************************************/

#if 0
#include <stdio.h>
int search(char a){
	if(a >= 'f' && a <= 'z') return 1;
	else return 0;
}

void main(void)
{
	char ch;
	scanf("%c", &ch);

	if(search(ch) == 1) printf("YES");
	else printf("NO");

}
#endif

/***********************************************************/
// [6-11] switch ~ case의 동작
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 2;

	switch (a)
	{
	case 1: printf("1번 연결해드리겠습니다\n");
	case 2: printf("2번 연결해드리겠습니다\n");
	case 3: printf("3번 연결해드리겠습니다\n");
	default: printf("잘못 거셨습니다\n");
	}
}
#endif

#if 0
#include <stdio.h>

void main(void)
{
	int a = 2;

	switch (a)
	{
	case 1: printf("1번 연결해드리겠습니다\n"); break;
	case 2: printf("2번 연결해드리겠습니다\n"); break;
	case 3: printf("3번 연결해드리겠습니다\n"); break;
	default: printf("잘못 거셨습니다\n");
	}
}
#endif

/***********************************************************/
// [심화6-3] 성적 처리하기
/***********************************************************/

#if 0
#include <stdio.h>

int 
void main(void)
{
	int a;
	scanf("%d", &a);

}
#endif


/***********************************************************/
// [7-1] 0 부터 20까지 3의 배수를 인쇄하는 코드
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int i;
	int sum = 0;
	for (i = 1; i <= 10; i++)
	{
		sum += i;
	}
	printf("%d\n", sum);
}
#endif

#if 0
#include <stdio.h>

void main(void)
{
	int i;
	for (i = 0; i <= 20; i++)
	{
		if (!(i % 3)) printf("%d ");
	}
	printf("\n");

}
#endif

/***********************************************************/
// [7-2] * 9씩 9줄 인쇄
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int i, j;
	for (i = 0; i<9; i++)
	{
		for (j = 0; j<9; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
#endif

/***********************************************************/
// [7-3] break, continue의 동작
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 7) break;
		if (i % 3) continue;
		printf("%d\n", i);
	}
}
#endif

/***********************************************************/
// [심화7-1] 반복문을 활용한 별 자판기 - 사각별
/***********************************************************/

#if 0
#include <stdio.h>

void Draw_Star(int N)
{
	int i,j;
	for(i=0 ; i<N ;i++){
		for(j=0 ; j<N ; j++){
			printf("*");
		}
	printf("\n");
	}

}

void main(void)
{
	int size;
	scanf("%d", &size);
	Draw_Star(size);
}
#endif

/***********************************************************/
// [심화7-2] 반복문을 활용한 별 자판기 - 역삼각별
/***********************************************************/

#if 0
#include <stdio.h>

void Draw_Star2(int N)
{
	int i,j;
	for(i=0 ; i<N ;i++){
		for(j=0 ; j<N-i ; j++){
			printf("*");
		}
	printf("\n");
	}
}

void main(void)
{
	int size;
	scanf("%d", &size);
	Draw_Star2(size);
}
#endif


/***********************************************************/
// [심화7-3] 반복문을 활용한 별 자판기 - 트리별
/***********************************************************/

#if 0
#include <stdio.h>

void Draw_Star3(int N)
{
	int i,j;
	for(i=0 ; i<N ;i++){
		for(j=0;j<N-i-1;j++) printf(" ");
		for(j=0 ; j<2*i+1 ; j++) printf("*");
	printf("\n");
	}
}

void main(void)
{
	int size;
	scanf("%d", &size);
	Draw_Star3(size);
}
#endif

/***********************************************************/
// [7-4] 알아두면 편리한 while 구문
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d\n", a);
		a++;
	}
}
#endif

#if 0
#include <stdio.h>

void main(void)
{
	int a = 0;

	while (!(a == 13))
	{
		printf("%d\n", a);
		a++;
	}
}
#endif


/***********************************************************/
// [7-5] do ~ while 문이 필요할 때
/***********************************************************/

#if 0
#include <stdio.h>

int num = 0;

int func(void)
{
	num++;
	return num;
}

void main(void)
{
	int a = 0;

	do
	{
		a = func();
		printf("a=%d\n", a);
	} while (a < 5);

	a = 10;
}
#endif

#if 0
#include <stdio.h>

int num = 0;

int func(void)
{
	num++;
	return num;
}

void main(void)
{
	int a = 0;

	a = func();

	while (a <= 5)
	{
		printf("a=%d\n", a);
		a = func();
	}
}
#endif

/***********************************************************/
// [심화7-4] 자릿수 알기
/***********************************************************/

#if 0
#include <stdio.h>

int loc(int num){
	int count = 0;
	int i=1;
	while(num!=0){
		num= num/10;
		count++;
	}
	return count;
}
void main(void)
{
	int a;
	scanf("%d", &a);

	printf("%d",loc(a));
}
#endif


/***********************************************************/
// [심화7-5] 행운의 네잎클로버 찾기
/***********************************************************/

#if 0
#include <stdio.h>

void loc(int num){
	int i,j;
	int sum=0;
	while(num>=10){
		i = num%10; // 1의 자리
		j = num/10; // 10의 자리
		sum = i+j;
		if(sum==7) printf("%d\n", num);
		if(sum==3) break;
		num--;
	}
}
void main(void)
{
	int a;
	scanf("%d", &a);

	loc(a);
}
#endif

/***********************************************************/
// [8-1] 전역변수와 extern => Exam02.c와 함께 사용
/***********************************************************/

#if 0
#include <stdio.h>

extern void func(void);

int a;
extern int b;

void main(void)
{
	func();
	a++;
	b++;
	printf("a=%d\n", a);
	printf("b=%d\n", b);
}
#endif

/***********************************************************/
// [8-2] 지역변수와 extern => Exam02.c와 함께 사용
/***********************************************************/

#if 0
#include <stdio.h>

extern void func(void);

int a;

void main(void)
{
	extern int a;
	extern int b;
	int c = 100;

	func();
	a++;
	b++;
	c++;
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	printf("c=%d\n", c);
}
#endif

/***********************************************************/
// [8-3] 전역변수와 static => Exam02.c와 함께 사용
/***********************************************************/

#if 0
#include <stdio.h>

extern void func(void);

int a;
static int b = 10;
extern int c;

void main(void)
{
	func();

	c++;
	a++;
	b++;
	printf("a=%d\n", a);
	printf("b=%d\n", b);
}
#endif

/***********************************************************/
// [8-4] 지역변수와 static
/***********************************************************/

#if 0
#include <stdio.h>

int a;
static int b = 10;

void func(void)
{
	static int b = 20;
	a++; b++;
	printf("a=%d, b=%d\n", a, b);
}

void main(void)
{
	a++; b++;
	func();
	func();
	printf("a=%d, b=%d\n", a, b);
}
#endif

/***********************************************************/
// [8-5] argument 전달과 리턴
/***********************************************************/

#if 0
#include <stdio.h>

int fa(int a, int b);

int a = 1, b = 2, c, d;

void main(void)
{
	int a, b = c * 2, c = 10;
	b = fa(a = c + 2, b);
	a = a + b + c + d;
	printf("%d\n", a);
}

int fa(int a, int b)
{
	int d;
	d = a + b + c;
	printf("%d\n", d);
	return d;
}
#endif


/***********************************************************/
// [8-6] local의 static 
/***********************************************************/

#if 0
#include <stdio.h>

void f1(void);
int a = 10; static int s = 20;

void main(void)
{
	static int s;
	a++, s++;
	printf("%d %d\n", a, s);
	f1();
	a++, s++;
	printf("%d %d\n", a, s);
	f1();
}

void f1(void)
{
	int a = 1; static int s = 2;
	a++, s++;
	printf("%d %d\n", a, s);
}
#endif


/***********************************************************/
// [9-1] 배열 생성과 요소 액세스
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int i;
	int a[4];

	for (i = 0; i < 4; i++)
	{
		a[i] = i * 10;
	}
	printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);
}
#endif

/***********************************************************/
// [심화9-1] 최대값 찾기
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a[10] = { 3, 4, -10, 59, 32, 48, 22, 77, -99, 9 };
	int i, max, min;

	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	max = 0x80000000; //a[0];
	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		if (max < a[i]) max = a[i];
	}
	printf("MAX = %d\n", max);

	min = 0x7FFFFFFF;
	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		if (min > a[i]) min = a[i];
	}
	printf("MIN = %d\n", min);
}
#endif


#if 0
#include <stdio.h>

void main(void){
    char ch[11];
	int i=0;
    scanf("%s", ch);
	while(ch[i]!='\0'){
		printf("%c\n", ch[i]);
		i++;
	}
}
#endif



/***********************************************************/
// [심화9-2] 성적처리 프로그램
/***********************************************************/

#if 0
#include <stdio.h>

int score[] = { 0, 59, 60, 71, 80, 91, 100, 101, -10 };
char lookup[] = "FFFFFFDCBAA";
char getGrade(int num)
{
	if (num < 0 || num >100) return 'X';
	return lookup[num / 10];
}
void main(void)
{
	int i;
	for (i = 0; i < sizeof(score) / sizeof(score[0]); i++)
	{
		printf("Score: %3d ==> %c\n", score[i], getGrade(score[i]));
	}
}

#endif

/***********************************************************/
// [심화9-3] 가장 많은 알파벳은?
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{

}
#endif


/***********************************************************/
// [9-2] 2차원 배열 초기화와 액세스
/***********************************************************/

#if 0
#include <stdio.h>

int a[3][4] = { { 1,2,3,4 },{ 5,6,7,8 },{ 9,10,11,12 } };

void main(void)
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d, %d = %d\n", i, j, a[i][j]);
		}
	}
}
#endif

/***********************************************************/
// [심화9-4] 합이 가장 큰 행과 열
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a[4][5] = { { 3, -5, 12, 3, -21 },{ -2, 11, 2, -7, -11 },
	                      { 21, -21, -35, -93, -11 },{ 9, 14, 39, -98, -1 } };

	int x[4]={0};
	int y[5]={0};
	int i,j;
	int x_max=-10000;
	int y_max=-10000;
	int xidx=0, yidx=0;
	for(i=0 ; i<4 ; i++){
		for(j=0 ; j<5 ; j++){
			x[i]+= a[i][j]; //행
		}
		
	}

	for(j=0 ; j<5 ; j++){
		for(i=0 ; i<4 ; i++){
			y[j]+= a[i][j]; //열
		}
	}

	

	for(i=0 ; i<4 ;i++){
		if(x_max < x[i]) {
			x_max = x[i];
			xidx++;
		} //행max
	}
	for(j=0 ; j<5 ;j++){
		if(y_max < y[j]){
			y_max = y[i];
			yidx++;
		}//열max
	}

	printf("%d %d", xidx, yidx);

}



#endif

/***********************************************************/
// [심화9-5] 가위, 바위, 보 게임
/***********************************************************/

#if 0
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int a[3]={0,1,2};
	int a_result;

	printf("가위(0), 바위(1), 보(2)를 입력하시오.");
	while(1){
		scanf("%d", &a_result);
	}


}
#endif

/***********************************************************/
// [심화9-6] 단순정렬 - 오름차순
/***********************************************************/

#if 0
#include <stdio.h>
int data[] = { 2, 1, 9, 7, -3, 2, 6, 4, 3, 8 };
int N;
void simpleSort(int N)
{
	int i, j, temp;

	for (i = 0; i < 3; i++)
	{
		for (j = i + 1; j < N; j++)
		{
			if (data[i] > data[j])
			{
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
	}
}
void printAry(int N)
{
	int i;
	for (i = 0; i < N; i++)
	{
		printf("%d ", data[i]);
	}
	printf("\n");
}
void main(void)
{
	int N = sizeof(data) / sizeof(data[0]);
	printAry(N);
	simpleSort(N);
	printAry(N);
}
#endif

/***********************************************************/
// [10-1] 포인터 변수의 동작 이해
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a = 100;
	int *p;

	p = &a;
	*p = 200;

	printf("%#.8x %#.8x\n", p, &a);
	printf("%d %d\n", *p, a);
}
#endif

/***********************************************************/
// [10-2] Call by address와 포인터 parameter
/***********************************************************/

#if 0
#include <stdio.h>

void f1(int a)
{
	a = 200;

	printf("%d\n", a);
}

void f2(int *p)
{
	*p = 200;

	printf("%d\n", *p);
}

void main(void)
{
	int a = 100;

	f1(a);
	printf("%d\n", a);

	f2(&a);
	printf("%d\n", a);
}
#endif

/***********************************************************/
// [10-3] 포인터와 배열
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a[4] = {10, 20, 30, 40 };
	int *p;

	printf("%#.8x, %#.8x\n", a, &a[0]);
	printf("%d, %d\n", a[0], *a);
	printf("%d, %d\n", a[1], *(a+1));

	p = &a[0];
	printf("%#.8x, %#.8x\n", &a[0], p);
	printf("%d, %d, %d, %d\n", *&a[0], *p, a[0], p[0]);
	printf("%#.8x, %#.8x\n", &a[0] + 1, p + 1);
	printf("%d, %d, %d, %d\n", *(&a[0]+1), *(p+1), a[1], p[1]);

	p = a;
	printf("%#.8x, %#.8x\n", a, p);
	printf("%d, %d, %d, %d\n", a[0], *a, *p, p[0]);
	printf("%#.8x, %#.8x\n", a + 1, p + 1);
	printf("%d, %d, %d, %d\n", a[1], *(a+1), *(p+1), p[1]);
}
#endif

/***********************************************************/
// [10-4] 10개 정수를 갖는 배열의 함을 구하는 함수
/***********************************************************/

#if 0
#include <stdio.h>

int sum1(int a[10])
{
	int i, s = 0;

	for (i = 0; i < 10; i++)
	{
		s += a[i];
	}

	return s;
}

int sum2(int a[10])
{
	int i, s = 0;
	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		s += a[i];
	}
	return s;
}

void main(void)
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int r;

	r = sum1(a);
	printf("SUM1 = %d\n", r);

	r = sum2(a);
	printf("SUM2 = %d\n", r);
}
#endif

/***********************************************************/
// [10-5] 함수 parameter에 있는 배열의 의미
/***********************************************************/

#if 0
#include <stdio.h>

int sum1(int a[10])
{
	int i, s = 0;

	for (i = 0; i < 10; i++)
	{
		s += a[i];
	}

	return s;
}

int sum2(int a[100])
{
	int i, s = 0;

	for (i = 0; i < 10; i++)
	{
		s += a[i];
	}

	return s;
}

int sum3(int a[])
{
	int i, s = 0;

	for (i = 0; i < 10; i++)
	{
		s += a[i];
	}

	return s;
}

int sum4(int *p)
{
	int i, s = 0;

	for (i = 0; i < 10; i++)
	{
		s += *(p + i);
	}

	return s;
}

int sum5(int *p)
{
	int i, s = 0;

	for (i = 0; i < 10; i++)
	{
		s += p[i];
	}

	return s;
}

void main(void)
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int r;

	r = sum1(a);
	printf("SUM1 = %d\n", r);

	r = sum2(a);
	printf("SUM2 = %d\n", r);

	r = sum3(a);
	printf("SUM3 = %d\n", r);

	r = sum4(a);
	printf("SUM4 = %d\n", r);

	r = sum5(a);
	printf("SUM5 = %d\n", r);
}
#endif

/***********************************************************/
// [10-6] 문자열은 연속한 문자들의 집합이다
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	char *p = "Hello";

	printf("%s, %s\n", p, "Hello");
	printf("%s, %s\n", p + 1, "Hello" + 1);
	printf("%c, %c, %c, %c\n", *p, p[0], *"Hello", "Hello"[0]);
	printf("%c, %c, %c, %c\n", *(p + 1), p[1], *("Hello" + 1), "Hello"[1]);
}
#endif

/***********************************************************/
// [10-7] 문자열을 넘겨 받는 함수
/***********************************************************/

#if 0
#include <stdio.h>

void func(char *p)
{
	printf("%s\n", p);
	printf("%c\n", p[1]);
}

void main(void)
{
	func("Hello");
}
#endif

/***********************************************************/
// [10-8] *p++의 기능
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int cnt = 0;
	char *p = "Embedded";

	while (*p)
	{
		if (*p++ == 'd') cnt++;
	}
	printf("%d\n", cnt);
}
#endif

/***********************************************************/
// [심화10-1] 문자열 복사
/***********************************************************/

#if 0
#include <stdio.h>

void str_copy(char * d, const char * s)
{
	while (*d++ = *s++);
}

void main(void)
{
	char a[5];
	char b[5] = "ABCD";

	str_copy(a, b);
	printf("%s\n%s\n", a, b);
}
#endif

/***********************************************************/
// [심화10-2] 문자열 길이 측정
/***********************************************************/

#if 0
#include <stdio.h>

unsigned int  str_lenth(const char * d)
{

}

void main(void)
{
	char a[] = "Willtek";

	printf("%d\n", sizeof(a));
	printf("%d\n", str_lenth(a));
}
#endif


/***********************************************************/
// [10-9] malloc 사용 예
/***********************************************************/

#if 0
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int i;
	int * p;

	p = malloc(40);

	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", *(p + i));
	}
}
#endif

#if 0
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int i;
	int * p;

	p = malloc(40);

	for (i = 0; i < 10; i++)
	{
		p[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", p[i]);
	}
}
#endif

/***********************************************************/
// [10-10] sizeof, 리턴 주소의 확인, free 함수 사용
/***********************************************************/

#if 0
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int i;
	int * p;

	p = malloc(10 * sizeof(int));
	if (p == 0x0) return;

	for (i = 0; i < 10; i++)
	{
		p[i] = i;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d\n", p[i]);
	}
	free(p);
}
#endif

/***********************************************************/
// [10-11] malloc과 calloc의 차이
/***********************************************************/

#if 0
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int i;
	int * p;

	p = malloc(10 * sizeof(int));
	if (p == 0x0) return;

	for (i = 0; i < 10; i++)
	{
		printf("malloc[%d]=%d\n", i, p[i]);
	}

	free(p);

	printf("\n\n");

	p = calloc(10, sizeof(int));
	if (p == 0x0) return;

	for (i = 0; i < 10; i++)
	{
		printf("calloc[%d]=%d\n", i, p[i]);
	}

	free(p);
}
#endif

/***********************************************************/
// [10-12] realloc의 동작
/***********************************************************/

#if 0
#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int i;
	int * p;

	p = malloc(5 * sizeof(int));
	if (p == 0x0) return;

	for (i = 0; i < 5; i++)
	{
		p[i] = i;
	}

	p = realloc(p, 10 * sizeof(int));
	if (p == 0x0) return;

	for (i = 5; i < 10; i++)
	{
		p[i] = i;
	}

	for (i = 0; i < 10; i++)
	{
		printf("[%d]=%d\n", i, p[i]);
	}

	realloc(p, 0);
}
#endif

/***********************************************************/
// [11-1] 구조체 멤버 액세스
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	struct st
	{
		int a;
		char b;
	} x, y, z;

	struct st x = { 100, 'A' };

	printf("a=%d b=%c\n", x.a, x.b);

	x.a = 200;
	x.b = 'B';

	printf("a=%d b=%c\n", x.a, x.b);
}
#endif


/***********************************************************/
// [11-2] 구조체는 기본형이다
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	int a, b = 10;

	a = b;
	printf("a=%d, b=%d\n", a, b);
}
#endif

#if 0
#include <stdio.h>

void main(void)
{
	struct st
	{
		int a;
		char b;
	} y = { 100, 'A' };

	struct st x = y;

	printf("x.a=%d, x.b=%c\n", x.a, x.b);
	printf("y.a=%d, y.b=%c\n", y.a, y.b);
}
#endif

/***********************************************************/
// [11-3] 구조체 멤버로 배열과 포인터도 가능하다
/***********************************************************/

#if 0
#include <stdio.h>

int y = 100;

struct st
{
	int a;
	int b[4];
	int *p;
}x = { 50,{ 10, 20 } };

void main(void)
{
	x.a = y;
	x.b[2] = y;
	x.p = &y;

	printf("x.a = %d\n", x.a);
	printf("x.b[2] = %d\n", x.b[2]);
	printf("*x.p = %d\n", *x.p);
}
#endif	

/***********************************************************/
// [11-4] 데이터 타입은 멤버의 타입
/***********************************************************/

#if 0
#include <stdio.h>

struct st
{
	int a;
	char b[4];
}x = { 100, "ABC" };

void main(void)
{
	char a[4] = "ABC";

	a = "LEW";
	x.b = "LEW";
}
#endif

/***********************************************************/
// [11-5] 문자열을 복사하거나 메모리를 복사하거나
/***********************************************************/

#if 0
#include <stdio.h>
#include <string.h>

struct st
{
	int a;
	char b[4];
}x = { 100, "ABC" };

void main(void)
{
	char a[4] = "ABC";

	memcpy(a, "LEW", sizeof("LEW"));
	strcpy(x.b, "LEW");

	printf("%s, %s\n", a, x.b);
}
#endif

/***********************************************************/
// [11-6] 구조체 배열
/***********************************************************/

#if 0
#include <stdio.h>

struct st
{
	int a;
	char b;
};

void main(void)
{
	int i;
	struct st x[4] = { { 10, 'A' },{ 20, 'B' },{ 30, 'C' },{ 40, 'D' } };

	for (i = 0; i < sizeof(x) / sizeof(x[0]); i++)
	{
		x[i].a = i;
		printf("%d, %c\n", x[i].a, x[i].b);
	}
}
#endif

/***********************************************************/
// [11-7] 구조체 포인터
/***********************************************************/

#if 0
#include <stdio.h>

struct st
{
	int a;
	char b;
}x = { 10, 'A' };

void main(void)
{
	struct st * p = &x;

	// 코드 작성

	printf("%c\n", x.b);
}
#endif

/***********************************************************/
// [11-8] 구조체 포인터를 전문으로 취하는 연산자
/***********************************************************/

#if 0
#include <stdio.h>

struct st
{
	int a;
	char b;
}x = { 10, 'A' };

void main(void)
{
	struct st * p = &x;

	(*p).b = 'L';
	printf("%c\n", x.b);

	p->b = 'K';
	printf("%c\n", x.b);
}
#endif

/***********************************************************/
// [11-9] 자기 참조 구조체
/***********************************************************/

#if 0
#include <stdio.h>

struct test
{
	int id;
	char * name;
	struct test *p;
}x, y;

void main(void)
{
	y.id = 2;
	y.name = "Lew";
	y.p = (struct test *)0x0;
	x.id = 1;
	x.name = "Song";
	x.p = &y;

	printf("%d\n", x.id);
	printf("%d\n", x.p->id);
	printf("%s\n", x.name);
	printf("%s\n", x.p->name);
}
#endif

/***********************************************************/
// [심화11-1] 모범생
/***********************************************************/

#if 1
#include <stdio.h>

struct st{
	int ID;
	int score_s;
};

struct st student[5000];

int sort(struct st *std){
	
//	int i,j;
//	struct st temp;

	/*for(i=0;i<3;i++){
		for(j=i+1;j<sizeof(std)
	}*/
	return sizeof(std->score_s);

}
int main(void)
{

	int a, i;
	scanf("%d\n", &a);
	
	for(i = 0 ; i<a ; i++){
		scanf("%d", &student[i].score_s);
		student[i].ID = i+1;
	}

	printf("%d", sort(student));
}
#endif

/***********************************************************/
// [11-10] 공용체
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	union uni
	{
		int a;
		unsigned char b;
	} x = { 0x12345678 };

	printf("a=%#x	b=%#x\n", x.a, x.b);
	printf("&x.a=%#.8x	&x.b=%#.8x\n", &x.a, &x.b);
	printf("sizeof x.a=%d	sizeof x.b=%d\n", sizeof(x.a), sizeof(x.b));
	printf("&x=%#.8x	sizeof x=%d\n", &x, sizeof(x));

	x.b = 0xEF;
	printf("a=%#x	b=%#x\n", x.a, x.b);
}
#endif

/***********************************************************/
// [11-11] 열거형의 특징 
/***********************************************************/

#if 0
#include <stdio.h>

enum color1 { WHITE, BLACK, YELLOW, RED };
enum color2 { BLACK, BROWN };
enum value   { A = -1, B = 1, C, D = 1 };

void main(void)
{
	printf("%d %d %d %d\n", WHITE, BLACK, YELLOW, RED);
	printf("%d %d %d %d\n", A, B, C, D);
}
#endif

/***********************************************************/
// [심화11-2] 공용체 활용
/***********************************************************/

#if 0
#include <stdio.h>

void main(void)
{
	struct st {
		unsigned char alpha;
		unsigned char blue;
		unsigned char green;
		unsigned char red;
	};
	union uni
	{
		unsigned int color;
		struct st rgb;
	};
	union uni A;

	A.color = 0xA1B1C155;
	printf("%X\n", A.color);
	printf("%X %X %X %X\n", A.rgb.red, A.rgb.green, A.rgb.blue, A.rgb.alpha);
	A.rgb.red = 0xA9;
	printf("%X %X\n", A.color, A.rgb.red);	
}
#endif

/***********************************************************/
// [12-1] #define과 가독성
/***********************************************************/

#if 0
#include <stdio.h>

#define MAX 10

void main(void)
{
	int i;
	int a[10];

	for (i = 0; i < 10; i++)
	{
		a[i] = i;
	}

	for (i = 0; i < MAX; i++)
	{
		printf("%d\n", a[i]);
	}
}
#endif

/***********************************************************/
// [12-2] macro 작성
/***********************************************************/

#if 0
#include <stdio.h>

#define PRT(x)  printf("%d\n", x)
#define SQR(x)  x*x
#define MAX		10 + 3

void main(void)
{
	int a = 10;

	PRT(3);
	PRT(MAX * MAX);
	PRT(SQR(5));
	PRT(SQR(a + 3));
}
#endif

/***********************************************************/
// [12-3] 여러 문장에 걸치 macro 설계
/***********************************************************/

#if 0
#include <stdio.h>

#define SWAP(p, q) 	int  t = *(p); *(p) = *(q); *(q) = t;

void main(void)
{
	int x = 10; int y = 20;

	printf("%d %d\n", x, y);
	SWAP(&x, &y)
		printf("%d %d\n", x, y);
}
#endif

/***********************************************************/
// [심화12-1] 배열의 요소수 구하는 매크로 함수
/***********************************************************/

#if 0
#include <stdio.h>
#define ARR_SIZE(x) (sizeof(x)/sizeof(int))

int a[4] = { 1, 2, 3, 4 };

void main(void)
{
	int i;

	for (i = 0; i < ARR_SIZE(a); i++)
	{
		printf("%d\n", a[i]);
	}
}
#endif

/***********************************************************/
// [심화12-2] 절대값이 가장 큰 수 구하기
/***********************************************************/

#if 0
#include <stdio.h>

#define ABS(x) (((x) < 0) ? -(x) : (x)) //x *= -1 

int MAX(int *num){
	int max=0;
	int j;

	for(j=0;j<5;j++){

		if(max < ABS(num[j]))	max = ABS(num[j]);
	}

	return max;

}
void main(void)
{
	int a[5];
	int i;
	for(i=0;i<5;i++){
	scanf("%d", &a[i]);
	}

	printf("%d", MAX(a)); 



}
#endif

/***********************************************************/
// [12-4] 내 맘대로 타입을 만든다
/***********************************************************/

#if 0
#include <stdio.h> 

typedef unsigned int UI;
typedef signed int SI;
typedef unsigned char BYTE;

void main(void)
{
	UI a;
	SI b = 2;
	BYTE c = 0x3C;

	a = (UI)(b + (SI)c);

	printf("%u\n", a);
}
#endif

/***********************************************************/
// [12-5] typedef의 중복 사용
/***********************************************************/

#if 0
#include <stdio.h> 

#define ARR_SIZE(x)	(sizeof(x)/sizeof((x)[0]))

typedef unsigned int UI;
typedef UI * UIP;

UI a[4] = { 1,2,3,4 };

void main(void)
{
	int i;
	UIP b = a;

	for (i = 0; i < ARR_SIZE(a); i++)
	{
		printf("%d\n", b[i]);
	}
}
#endif

/***********************************************************/
// [12-6] 구조체의 typedef
/***********************************************************/

#if 0
#include <stdio.h> 

typedef struct st
{
	int a;
	char b;
}BOOK;

void main(void)
{

	BOOK x = { 100, 'A' };

	x.a = 200;
	x.b = 'B';

	printf("a=%d b=%c\n", x.a, x.b);
}
#endif

/***********************************************************/
// [12-7] #ifdef, #ifndef 조건부 컴파일
/***********************************************************/

#if 0
#include <stdio.h>

#define PRT

void main(void)
{
#ifdef PRT
	printf("defined PRT\n");
#endif

#ifdef ABC
	printf("defined ABC\n");
#else
	printf("not defined ABC\n");
#endif
}
#endif

#if 0
#include <stdio.h>

#define PRT

void main(void)
{
#ifndef PRT
	printf("not defined PRT\n");
#endif

#ifndef ABC
	printf("not defined ABC\n");
#else
	printf("defined ABC\n");
#endif
}
#endif

/***********************************************************/
// [12-8] 조건부 컴파일의 사용
/***********************************************************/

#if 0
#include <stdio.h>

#define DEBUG
#define LITTLE

void main(void)
{
	int a = 20;
	int x;

#ifdef DEBUG
	printf("[DBG Message] a = %d\n", a);
#endif

#ifndef LITTLE
	x = mode_change(a);
#else
	x = a;
#endif
}
#endif

/***********************************************************/
// [12-9]  #if 조건부 컴파일
/***********************************************************/

#if 0
#include <stdio.h>

#define SOUND_DEVICE_TYPE	0

void main(void)
{
#if !SOUND_DEVICE_TYPE
	printf("사운드 장치를 사용하지 않음\n");

#elif SOUND_DEVICE_TYPE == 1
	printf("STEREO 모드 장치 사용\n");

#else
	printf("CODE 15 : Unknown Device!\n");

#endif
	printf("사운드 모드 = %d\n", SOUND_DEVICE_TYPE);
}
#endif

/***********************************************************/
// [13-1] memchr
/***********************************************************/

#if 0
#include <string.h>
#include <stdio.h>

void main(void)
{
	char * p = "Hello C World!\n";

	for (;;)
	{
		p = memchr(p, 'l', strlen(p));

		if(p)
		{
			printf("%s\n", p);
			p++;
		}
		
		else break;		
	}
}
#endif

/***********************************************************/
// [13-2] memcmp
/***********************************************************/

#if 0
#include <stdio.h>
#include <string.h>

void main(void)
{
	char a1[] = "ABCDEFGHIJ";
	char a2[] = "ABCDEFGHIK";
	char a3[] = "ABCD";
	char a4[] = "ABD";

	printf("a1 vs. a2 : %d\n", memcmp(a1, a2, 9));
	printf("a1 vs. a2 : %d\n", memcmp(a1, a2, 10));
	printf("a2 vs. a3 : %d\n", memcmp(a2, a3, 10));
	printf("a3 vs. a4 : %d\n", memcmp(a3, a4, 4));
}
#endif

/***********************************************************/
// [13-3] memcpy & memmove
/***********************************************************/

#if 0
#include <string.h>
#include <stdio.h>

char str1[10] = "abcdefgh";
char str2[10];

void main(void)
{
	memcpy(str2, "abcdefgh", strlen("abcdefgh")+1);
	printf("memcpy : %s, %s\n", str1, str2);
}
#endif

/***********************************************************/
// [13-4] memset
/***********************************************************/

#if 0
#include <string.h>
#include <stdio.h>

void main(void)
{
	char buffer[] = "memset function test";

	printf("Before: %s\n", buffer);
	memset(buffer, '*', 4);
	printf("After:  %s\n", buffer);
}
#endif

/***********************************************************/
// [13-5] strcpy
/***********************************************************/

#if 0
#include <stdio.h>
#include <string.h>

void main(void)
{
	char str1[10] = "abcdefghi";
	char str2[10];

	strcpy(str2, str1);
	printf("strcpy: str2 = %s\n", str2);

	strcpy(str2, "123456789012345");
	printf("src > buffer: str2 = %s\n", str2);

	strcpy(str2, "12345");
	printf("src < buffer: str2 = %s\n", str2);
}
#endif

/***********************************************************/
// [13-6] strncpy
/***********************************************************/

#if 0
#include <stdio.h>
#include <string.h>

#define ARR_SIZE(x)	(sizeof(x)/sizeof((x)[0]))

void main(void)
{
	char str1[10] = "abcdefghi";
	char str2[10];

	strncpy(str2, str1, 10);
	printf("strncpy: str2  = %s\n", str2);

	strncpy(str2, "ABCDEFGHIJKLMNO", ARR_SIZE(str2));
	printf("src > count #1: str2 = %s\n", str2);

	strncpy(str2, "ABCDEFGHIJKLMNO", ARR_SIZE(str2) - 1);
	str2[ARR_SIZE(str2) - 1] = '\0';
	printf("src > count #2: str2 = %s\n", str2);

	strncpy(str2, "123", ARR_SIZE(str2));
	printf("src < count: str2 = %s\n", str2);
}
#endif

/***********************************************************/
// [13-7] strcat
/***********************************************************/

#if 0
#include <string.h>
#include <stdio.h>

void main(void)
{
	char string[80];

	strcpy(string, "Hello world from ");
	strcat(string, "strcpy ");
	strcat(string, "and ");
	strcat(string, "strcat!");
	printf("String = %s\n", string);
}
#endif

/***********************************************************/
// [13-8] strncat
/***********************************************************/

#if 0
#include <string.h>
#include <stdio.h>

void main(void)
{
	char string[80];

	strcpy(string, "Hello world from ");

	strncat(string, "strcpy ", 8);
	strncat(string, "and ", 8);
	strncat(string, "strcat!", 3);
	printf("String = %s\n", string);
}
#endif

/***********************************************************/
// [13-9] strlen
/***********************************************************/

#if 0
#include <string.h>
#include <stdio.h>

void main(void)
{
	char astr[10] = "Hello";
	char bstr[] = "Hello";

	printf("%d, %d\n", sizeof(astr), strlen(astr));
	printf("%d, %d\n", sizeof(bstr), strlen(bstr));
	printf("%d, %d\n", sizeof("Hello"), strlen("Hello"));
}
#endif

/***********************************************************/
// [13-10] strcmp & strncmp
/***********************************************************/

#if 0
#include <string.h>
#include <stdio.h>

void main(void)
{
	printf("%d\n", strcmp("ABC", "BC"));
	printf("%d\n", strcmp("ABC", "AC"));
	printf("%d\n", strcmp("ABC", "AB"));
	printf("%d\n", strcmp("abc", "ABC"));
	printf("%d\n", strcmp("ab", " "));
	printf("\n");
	printf("%d\n", strncmp("ABC", "BC", 5));
	printf("%d\n", strncmp("ABC", "AC", 3));
	printf("%d\n", strncmp("ABC", "AB", 2));
	printf("%x\n", strncmp("abc", "ABC", 2));
	printf("%x\n", strncmp("ab", " ", 2));
}
#endif

/***********************************************************/
// [13-11] strstr
/***********************************************************/

#if 0
#include <string.h>
#include <stdio.h>

void main(void)
{
	char * str1 = "Embedded C Programming";

	printf("str1 = %#.8x, %s\n", str1, str1);
	printf("0x%.8x, %s\n", strstr(str1, "gram"), strstr(str1, "gram"));
	printf("0x%.8x, %s\n", strstr(str1, "Imbedded"), strstr(str1, "Imbedded"));
	printf("0x%.8x, %s\n", strstr(str1, "\0"), strstr(str1, "\0"));
}
#endif

/***********************************************************/
// [13-12] strtok
/***********************************************************/

#if 0
#include <string.h>
#include <stdio.h>

// char str[] 변수를 char * str로 고치고 실행시켜 봅시다

char str[] = "Ritchie was\nunder the radar."
"His name \twas not a household name at all,"
"but... if you had a microscope and could look in "
"a computer, you'd see his work everywhere inside!.";
char sep[] = "\t\n,.!";

int main(void)
{
	char * p;

	p = strtok(str, sep);

	while (p != NULL)
	{
		printf("%s\n", p);
		p = strtok(NULL, sep);
	}
}
#endif

/***********************************************************/
// [13-13] character classification and conversion
/***********************************************************/

#if 0
#include <ctype.h>
#include <stdio.h>

char data[] = { 'A', 'z', '3', 0x00, 0x11 };

int main(void)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("isalnum('%c') = %d\n", data[i], isalnum(data[i]));
		printf("isalpha('%c') = %d\n", data[i], isalpha(data[i]));
		printf("iscntrl('%c') = %d\n", data[i], iscntrl(data[i]));
		printf("isdigit('%c') = %d\n", data[i], isdigit(data[i]));
		printf("islower('%c') = %d\n", data[i], islower(data[i]));
		printf("isupper('%c') = %d\n", data[i], isupper(data[i]));
		printf("isspace('%c') = %d\n", data[i], isspace(data[i]));
		printf("isxdigit('%c') = %d\n", data[i], isxdigit(data[i]));
	}
	printf("tolower('%c') = %c\n", data[0], tolower(data[0]));
	printf("toupper('%c') = %c\n", data[1], toupper(data[1]));

}
#endif

/***********************************************************/
// [13-14] data conversion
/***********************************************************/

#if 0
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char **ptr = 0;
	printf("abs(%d) = %d, abs(%d) = %d\n", -5, abs(-5), 5, abs(5));
	printf("atof(%s) = %.10f\n", "3.33", atof("3.33"));
	printf("atoi(%s) = %d\n", "12356", atoi("12356"));
	printf("atol(%s) = %ld\n", "3456789012", atol("3456789012"));
	printf("labs(%ld) = %ld\n", -345678L, labs(-345678L));
	printf("strtod(%s) = %.10f\n", "3.33", strtod("3.33", ptr));
	printf("strtoul(%s) = %lu\n", "345678", strtoul("345678", ptr, 0));
}
#endif
