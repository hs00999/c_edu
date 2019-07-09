/* 절대 이부분은 삭제하거나 수정하지 마시오 */

#include "m0_matrix_lib.h"
#include <stdlib.h>

/* 이부분부터 사용자가 임의로 수정이 가능함 단, 실습예제에서는 이 정의와 변수들을 사용함 */

#define NO			0
#define TRANS		1
#define CHROMA		1

#define 	BLACK	0x000000
#define 	RED 	0xFF0000
#define 	GREEN	0x00FF00
#define 	BLUE	0x0000FF
#define 	YELLOW	0xFFFF00
#define 	CYAN	0x00FFFF
#define 	VIOLET	0xFF00FF
#define 	WHITE	0xFFFFFF

#define 	_0 		BLACK
#define 	_R		RED
#define 	_G		GREEN
#define 	_B		BLUE
#define 	_Y 		YELLOW
#define 	_C		CYAN
#define 	_V		VIOLET
#define 	_W		WHITE

unsigned int COLOR[] = {BLACK, RED, GREEN, BLUE, YELLOW, CYAN, VIOLET, WHITE};
unsigned int icon[][2] = {{0x0066FFFF, 0xFF7E3C18},};

/***********************************************************/
// [실습 0] 사랑합니다. 여러분
/***********************************************************/

#if 0

int main(void)
{
	Uart2_Printf("\n\n== 사랑합니다. 여러분! ==\n\n");

	for(;;)
	{
		IMG_Icon_Disp(0, 0, 0, RED, BLACK);
		TIM_Delay_ms(1000);
		IMG_Icon_Disp(0, 0, 0, BLUE, BLACK);
		TIM_Delay_ms(1000);
	}

	return 0;
}

#endif

/***********************************************************/
// [실습 1] 원하는 색상으로 원하는 위치에 점찍기
/***********************************************************/

#if 0

int main(void)
{
	Uart2_Printf("\n\n== Edunix Cortex-M0-SQR Board V2.0 ==\n\n");

	{
		RGB_Clr_Screen( );     	// 원하는 색을 넣어서 함수를 호출한다
		RGB_Put_Pixel(      );  	// 원하는 위치에 원하는 색의 점을 찍어보자
	}

	return 0;
}

#endif

/***********************************************************/
// [실습 2] 키보드로부터 숫자 받아 다시 인쇄하기
/***********************************************************/

#if 0

#include <stdlib.h>

int main(void)
{
	Uart2_Printf("\n키보드로부터 숫자 받아 다시 인쇄하기\n");

	{
		int num1, num2;

		Uart2_Printf("첫 번째 숫자를 입력하시오(ex. 100, -250, 0x3F4 ...)\n");
		num1 = Uart2_Get_Int_Num();
		Uart2_Printf("입력한 숫자는 = %d(0x%08X)\n", num1, num1);

		Uart2_Printf("두 번째 숫자를 입력하시오(ex. 100, -250, 0x3F4 ...)\n");
		num2 = Uart2_Get_Int_Num();
		Uart2_Printf("입력한 숫자는 = %d(0x%08X)\n", num2, num2);
	}

	return 0;
}

#endif

/***********************************************************/
// [실습 3] 키보드로부터 좌표와 색상 입력 받아 LED에 표시하기
/***********************************************************/

#if 0

#include <stdlib.h>

int main(void)
{
	Uart2_Printf("\n키보드로부터 좌표와 색상 입력 받아 LED에 표시하기\n");

	{
		int x, y, color;

		// 코드 작성



	}

	return 0;
}

#endif

/***********************************************************/
// [실습 4] 작은 숫자 폰트 표시 함수
/***********************************************************/

#if 0

int main(void)
{
	Uart2_Printf("\n작은 숫자 폰트 표시 함수\n");

	IMG_Num_Disp(0, 0, 0, 3, BLUE, YELLOW);
	IMG_Num_Disp(0, 0, 1, 8, RED, WHITE);

	return 0;
}

#endif

/***********************************************************/
// [실습 5] 키보드로 받은 2자리 숫자를 표시하기
/***********************************************************/

#if 0

int main(void)
{
	Uart2_Printf("\n키보드로 받은 2자리 숫자를 표시하기\n");

	{
		int num;

		Uart2_Printf("0~99 범위의 숫자를 입력하시오\n");
		num = Uart2_Get_Int_Num();

		// 코드 작성



	}

	return 0;
}

#endif

/***********************************************************/
// [실습 6] 특정 위치의 픽셀 값을 읽어오기
/***********************************************************/

#if 0

int main(void)
{
	Uart2_Printf("\n특정 위치의 픽셀 값을 읽어오기\n");

	RGB_Clr_Screen(BLACK);
	RGB_Draw_Bar(0, 0, 4, 4, RED);
	RGB_Draw_Bar(3, 3, 6, 6, BLUE);

	Uart2_Printf("(1,2) = 0x%08X\n", RGB_Get_Pixel(1, 2));
	Uart2_Printf("(4,4) = 0x%08X\n", RGB_Get_Pixel(4, 4));
	Uart2_Printf("(5,5) = 0x%08X\n", RGB_Get_Pixel(5, 5));

	return 0;
}

#endif

/***********************************************************/
// [실습 7] 특정 색상을 제거하기
/***********************************************************/

#if 0

int main(void)
{
	Uart2_Printf("\n특정 색상을 제거하기\n");

	RGB_Clr_Screen(WHITE);

	// (1,1) => WHITE에서 적색을 제거, CYAN 색상이 되게 한다
	// (2,2) => WHITE에서 녹색을 제거, VIOLET 색상이 되게 한다
	// (3,3) => WHITE에서 청색을 제거, YELLOW 색상이 되게 한다
	// (4,4) => WHITE에서 녹색, 청색 제거, RED만 남긴다
	// (5,5) => WHITE에서 청색, 적색 제거, GREEN만 남긴다
	// (6,6) => WHITE에서 녹색, 적색 제거, BLUE만 남긴다

	// 코드 작성



	return 0;
}

#endif

/***********************************************************/
// [실습 8] 두 숫자를 한 번에 표시하는 함수 설계
/***********************************************************/

#if 0

void IMG_Print_Num(int x, int y, int num, UI c, UI bc);

int main(void)
{
	Uart2_Printf("\n두 숫자를 한 번에 표시하는 함수 설계\n");

	{
		int num;

		Uart2_Printf("0~99 범위의 숫자를 입력하시오\n");
		num = Uart2_Get_Int_Num();

		IMG_Print_Num(0, 0, num, RED, YELLOW);

	}

	return 0;
}

void IMG_Print_Num(int x, int y, int num, UI c, UI bc)
{
	// void IMG_Num_Disp(int x, int y, int pos, int num, UI c, UI bc) 함수를 이용한다

	// 코드 작성



}

#endif

/***********************************************************/
// [실습 9] KEY 스위치 제어 함수
/***********************************************************/

#if 0

#include <stdlib.h>

int main(void)
{
	Uart2_Printf("\nKEY 스위치 제어 함수\n");

	RGB_Clr_Screen(BLACK);

	KEY_Wait_Key_Pressed();
	RGB_Put_Pixel(0, 0 , RED);
	Uart2_Printf("Pressed1\n");

	// KEY_Wait_Key_Released();  // 이 코드가 있으면?

	KEY_Wait_Key_Pressed();
	RGB_Put_Pixel(1, 1 , BLUE);
	Uart2_Printf("Pressed2\n");

	// KEY_Wait_Key_Released();  // 이 코드가 있으면?

	KEY_Wait_Key_Pressed();
	RGB_Put_Pixel(2, 2 , GREEN);
	Uart2_Printf("Pressed3\n");

	return 0;
}

#endif

/***********************************************************/
// [실습 10] 영문 폰트의 출력
/***********************************************************/

#if 0

int main(void)
{
	Uart2_Printf("\n영문 폰트의 출력\n");

	RGB_Eng_Putch(           );  // 원하는 좌표에 원하는 글자를 출력해 보자
	TIM_Delay_ms(1000);
	RGB_Eng_Putch(           );  // 원하는 좌표에 원하는 글자를 출력해 보자
	TIM_Delay_ms(1000);

	return 0;
}

#endif

/***********************************************************/
// [실습 11] 키보드에서 들어온 글자를 화면에 표시
/***********************************************************/

#if 0

int main(void)
{
	Uart2_Printf("\n키보드에서 들어온 글자를 화면에 표시\n");

	unsigned char x;

	Uart2_Printf("글자1 => ");
	x = Uart2_Get_Char();
	Uart2_Printf("\n");
	RGB_Eng_Putch(0, 0, RED, BLACK, x);

	Uart2_Printf("글자2 => ");
	x = Uart2_Get_Char();
	Uart2_Printf("\n");
	RGB_Eng_Putch(0, 0, RED, BLACK, x);

	return 0;
}

#endif

/***********************************************************/
// [실습 12] 그래픽 처리 기능
/***********************************************************/

#if 0

int main(void)
{
	Uart2_Printf("\n그래픽 처리 기능.  스위치를 누르면 다음 기능으로\n");

	Uart2_Printf("[LAB1] Draw Line\n");

	Uart2_Printf("H-Line: 스위치를 누르세요\n");

	RGB_Clr_Screen(BLACK);
	RGB_Draw_Hline(3, 1, 6, BLUE);
	KEY_Wait_Key_Pressed();
	KEY_Wait_Key_Released();

	Uart2_Printf("V-Line: 스위치를 누르세요\n");

	RGB_Draw_Vline(3, 1, 6, GREEN);
	KEY_Wait_Key_Pressed();
	KEY_Wait_Key_Released();

	Uart2_Printf("Line: 스위치를 누르세요\n");

	RGB_Draw_Line(0, 8, 6, 2, RED);
	KEY_Wait_Key_Pressed();
	KEY_Wait_Key_Released();

	Uart2_Printf("\n[LAB2] Draw Rectangle\n");

	Uart2_Printf("Rectangle: 스위치를 누르세요\n");

	RGB_Clr_Screen(BLACK);
	RGB_Draw_Rect(0, 0, 4, 4, RED);
	RGB_Draw_Rect(2, 2, 6, 6, BLUE);
	KEY_Wait_Key_Pressed();
	KEY_Wait_Key_Released();

	Uart2_Printf("Bar: 스위치를 누르세요\n");

	RGB_Clr_Screen(BLACK);
	RGB_Draw_Bar(0, 0, 4, 4, RED);
	RGB_Draw_Bar(3, 3, 6, 6, BLUE);
	KEY_Wait_Key_Pressed();
	KEY_Wait_Key_Released();

	Uart2_Printf("\n[LAB3] Transparency Mode\n");

	Uart2_Printf("[1] Transparent Mode Off!\n");
	Uart2_Printf("Rectangle: 스위치를 누르세요\n");

	RGB_Clr_Screen(BLACK);
	RGB_Draw_Rect(0, 0, 4, 4, RED);
	RGB_Draw_Rect(2, 2, 6, 6, BLUE);
	KEY_Wait_Key_Pressed();
	KEY_Wait_Key_Released();

	Uart2_Printf("Bar: 스위치를 누르세요\n");

	RGB_Clr_Screen(BLACK);
	RGB_Draw_Bar(0, 0, 4, 4, RED);
	RGB_Draw_Bar(3, 3, 6, 6, BLUE);
	KEY_Wait_Key_Pressed();
	KEY_Wait_Key_Released();

	Uart2_Printf("[2] Transparent Mode On!\n");

	RGB_Set_Trans_Mode(TRANS);

	Uart2_Printf("Rectangle: 스위치를 누르세요\n");

	RGB_Clr_Screen(BLACK);
	RGB_Draw_Rect(0, 0, 4, 4, RED);
	RGB_Draw_Rect(2, 2, 6, 6, BLUE);
	KEY_Wait_Key_Pressed();
	KEY_Wait_Key_Released();

	Uart2_Printf("Bar: 스위치를 누르세요\n");

	RGB_Clr_Screen(BLACK);
	RGB_Draw_Bar(0, 0, 4, 4, RED);
	RGB_Draw_Bar(3, 3, 6, 6, BLUE);
	KEY_Wait_Key_Pressed();
	KEY_Wait_Key_Released();

	Uart2_Printf("Transparent Mode OFF!\n");
	RGB_Set_Trans_Mode(NO);

	Uart2_Printf("\n[LAB4] Chroma Key\n");

	Uart2_Printf("[1] Chroma Key Mode OFF!\n");
	Uart2_Printf("스위치를 누르세요\n");

	RGB_Clr_Screen(BLACK);
	RGB_Draw_Bar(3, 3, 6, 6, RED);
	RGB_Eng_Putch(0, 0, WHITE, BLUE, 'A');

	KEY_Wait_Key_Pressed();
	KEY_Wait_Key_Released();

	Uart2_Printf("[2] Chroma Key Mode ON! = BLUE\n");
	Uart2_Printf("스위치를 누르세요\n");

	RGB_Set_Chroma_Mode(CHROMA);
	RGB_Set_Key_Color(BLUE);

	RGB_Clr_Screen(BLACK);
	RGB_Draw_Bar(3, 3, 6, 6, RED);
	RGB_Eng_Putch(0, 0, WHITE, BLUE, 'A');

	KEY_Wait_Key_Pressed();
	KEY_Wait_Key_Released();

	RGB_Set_Chroma_Mode(NO);

	Uart2_Printf("Chroma Key Mode OFF!\n");

	Uart2_Printf("BYE!\n");

	return 0;
}

#endif

/***********************************************************/
// [실습 13] 이중 루프를 이용한 점 찍기
/***********************************************************/

#if 0

int main(void)
{
	int i, j;

	Uart2_Printf("\n이중 루프를 이용한 점 찍기\n");

	for(;;)
	{
		RGB_Clr_Screen(BLACK);

		// 코드 작성


	}

	return 0;
}

#endif

/***********************************************************/
// [실습 14] 점을 찍으면서 KEY 인식하기
/***********************************************************/

#if 0

int main(void)
{
	unsigned int key = 0;
	int i, j;

	Uart2_Printf("\n점을 찍으면서 KEY 인식하기\n");

	for(;;)
	{
		RGB_Clr_Screen(BLACK);

		for(i=0; i<8; i++)
		{
			for(j=0; j<8; j++)
			{
				RGB_Put_Pixel(j, i, 0xFF0000);
				TIM_Delay_ms(200);
				KEY_Wait_Key_Pressed();
				Uart2_Printf("%u번 째 키가 눌림\n", key);
				key++;
				KEY_Wait_Key_Released();
			}
		}
	}

	return 0;
}

#endif

/***********************************************************/
// [실습 15] 점을 찍으면서 KEY 인식하려면?
/***********************************************************/

#if 0

int main(void)
{
	int i, j;

	Uart2_Printf("\n점을 찍으면서 KEY 인식하려면?\n");

	for(;;)
	{
		RGB_Clr_Screen(BLACK);

		for(i=0; i<8; i++)
		{
			for(j=0; j<8; j++)
			{
				RGB_Put_Pixel(j, i, 0xFF0000);
				TIM_Delay_ms(200);

				// KEY_Get_Key_Pressed() 함수 이용

				// 코드 작성




			}
		}
	}

	return 0;
}

#endif

/***********************************************************/
// [실습 16-1] KEY 인식의 문제점
/***********************************************************/

#if 0

int main(void)
{
	unsigned int key = 0;
	int i, j;

	Uart2_Printf("\nKEY 인식의 문제점\n");

	for(;;)
	{
		RGB_Clr_Screen(BLACK);

		for(i=0; i<8; i++)
		{
			for(j=0; j<8; j++)
			{
				RGB_Put_Pixel(j, i, 0xFF0000);
				TIM_Delay_ms(200);

				if(KEY_Get_Key_Pressed())
				{
					Uart2_Printf("%u번 째 키가 눌림\n", key);
					key++;
				}
			}
		}
	}

	return 0;
}

#endif

/***********************************************************/
// [실습 16-2] Interlock의 이해
/***********************************************************/

#if 0

int main(void)
{
	unsigned int key = 0;
	int lock = 0;
	int i, j;

	Uart2_Printf("\nInterlock의 이해\n");

	for(;;)
	{
		RGB_Clr_Screen(BLACK);

		for(i=0; i<8; i++)
		{
			for(j=0; j<8; j++)
			{
				RGB_Put_Pixel(j, i, 0xFF0000);
				TIM_Delay_ms(200);

				if((lock == 0) && KEY_Get_Key_Pressed())
				{
					Uart2_Printf("%u번 째 키가 눌림\n", key);
					key++;
					lock = 1;
				}

				else if((lock == 1) && !KEY_Get_Key_Pressed())
				{
					lock = 0;
				}
			}
		}
	}

	return 0;
}

#endif

/***********************************************************/
// [실습 17] 키를 누를 때마다 색상 바꾸기
/***********************************************************/

#if 0

int main(void)
{
	unsigned int key = 0;
	unsigned int color = RED;
	int lock = 0;
	int i, j;

	Uart2_Printf("\n키를 누를 때마다 색상 바꾸기\n");

	for(;;)
	{
		RGB_Clr_Screen(BLACK);

		for(i=0; i<8; i++)
		{
			for(j=0; j<8; j++)
			{
				RGB_Put_Pixel(j, i, color);
				TIM_Delay_ms(200);

				if((lock == 0) && KEY_Get_Key_Pressed())
				{
					Uart2_Printf("%u번 째 키가 눌림\n", key);
					lock = 1;

					// key 변수 값에 따라 색상을 변경한다. key는 0~5를 순회한다

					// 코드 작성


				}

				else if((lock == 1) && !KEY_Get_Key_Pressed())
				{
					lock = 0;
				}
			}
		}
	}

	return 0;
}

#endif

/***********************************************************/
// [실습 18-1] 키를 누를 때마다 색상이 바뀌는 기존 코드
/***********************************************************/

#if 0

int main(void)
{
	unsigned int key = 0;
	unsigned int color = RED;
	int lock = 0;
	int i, j;

	Uart2_Printf("\n키를 누를 때마다 색상이 바뀌는 기존 코드 \n");

	for(;;)
	{
		RGB_Clr_Screen(BLACK);

		for(i=0; i<8; i++)
		{
			for(j=0; j<8; j++)
			{
				RGB_Put_Pixel(j, i, color);
				TIM_Delay_ms(100);

				if((lock == 0) && KEY_Get_Key_Pressed())
				{
					Uart2_Printf("%u번 째 키가 눌림\n", key);
					key = (key + 1) % 6;
					lock = 1;

					switch(key)
					{
						case 0 : color = RED; break;
						case 1 : color = GREEN; break;
						case 2 : color = BLUE; break;
						case 3 : color = YELLOW; break;
						case 4 : color = VIOLET; break;
						case 5 : color = CYAN; break;
					}
				}

				else if((lock == 1) && !KEY_Get_Key_Pressed())
				{
					lock = 0;
				}
			}
		}
	}

	return 0;
}

#endif

/***********************************************************/
// [실습 18-2] 배열을 이용한 색상 바꾸기
/***********************************************************/

#if 0

int main(void)
{
	static unsigned int color[] = {RED, GREEN, BLUE, YELLOW, VIOLET, CYAN};

	unsigned int key = 0;
	int lock = 0;
	int i, j;

	Uart2_Printf("\n배열을 이용한 색상 바꾸기\n");

	for(;;)
	{
		RGB_Clr_Screen(BLACK);

		for(i=0; i<8; i++)
		{
			for(j=0; j<8; j++)
			{
				// 코드 작성





			}
		}
	}

	return 0;
}

#endif

/***********************************************************/
// [실습 19] 난수 발생으로 색상 바꾸기
/***********************************************************/

#if 0

#include <stdlib.h>

int main(void)
{
	static unsigned int color[] = {RED, GREEN, BLUE, YELLOW, VIOLET, CYAN};
	int i, j;

	Uart2_Printf("\n난수 발생으로 색상 바꾸기\n");

	// 이 코드의 유무에 따른 변화는?
	 srand(RTC_Get_Time(&RTC_Time));

	for(;;)
	{
		RGB_Clr_Screen(BLACK);

		for(i=0; i<8; i++)
		{
			for(j=0; j<8; j++)
			{
				RGB_Put_Pixel(j, i, color[rand() % 6]);
				KEY_Wait_Key_Pressed();
				KEY_Wait_Key_Released();
			}
		}
	}

	return 0;
}

#endif

/***********************************************************/
// [실습 20] 이차원 배열과 LED Matrix
/***********************************************************/

#if 0

unsigned int img[8][8] =
{
	{_B,_B,_B,_B,_B,_B,_B,_B},
	{_B,_R,_R,_R,_B,_R,_R,_R},
	{_B,_B,_B,_R,_B,_R,_B,_R},
	{_B,_R,_R,_R,_B,_R,_R,_R},
	{_B,_R,_B,_B,_B,_B,_B,_R},
	{_B,_R,_B,_B,_B,_B,_B,_R},
	{_B,_R,_R,_R,_B,_R,_R,_R},
	{_B,_B,_B,_B,_B,_B,_B,_B}
};

int main(void)
{
	Uart2_Printf("\n이차원 배열과 LED Matrix\n");

	{
		int i, j;

		for(i=0; i<(sizeof(img)/sizeof(img[0])); i++)
		{
			for(j=0; j<(sizeof(img[0])/sizeof(img[0][0])); j++)
			{
				RGB_Put_Pixel(j, i, img[i][j]);
			}
		}
	}

	return 0;
}

#endif

/***********************************************************/
// [실습 21] 이차원 배열 그림 Display 함수
/***********************************************************/

#if 0

unsigned int img0[8][8] =
{
	{_G,_G,_G,_G,_G,_G,_G,_G},
	{_G,_R,_R,_G,_G,_R,_R,_G},
	{_R,_R,_R,_R,_R,_R,_R,_R},
	{_R,_R,_R,_R,_R,_R,_R,_R},
	{_R,_R,_R,_R,_R,_R,_R,_R},
	{_B,_R,_R,_R,_R,_R,_R,_B},
	{_B,_B,_R,_R,_R,_R,_B,_B},
	{_B,_B,_B,_R,_R,_B,_B,_B}
};

void Draw_Image(unsigned int pic[8][8]);

int main(void)
{
	Uart2_Printf("\n이차원 배열 그림 Display 함수\n");

	Draw_Image(img0);

	return 0;
}

void Draw_Image(unsigned int pic[8][8])
{
	int i, j;

	// RGB_Put_Pixel 함수를 이용한다
	// 이차원 배열을 LED에 표시한다

	// 코드 작성


}

#endif

/***********************************************************/
// [실습 22] 단색 아이콘 그리기
/***********************************************************/

#if 0

int main(void)
{
	Uart2_Printf("\n단색 아이콘 그리기\n");

	IMG_Icon_Disp(0, 0, 0, RED, BLUE);

	// 새로운 아이콘을 만들어서 icon[][2] 배열(main.c 상단)에 등록하고 표시하여 보자

	return 0;
}

#endif

/***********************************************************/
// [예제 23] 키보드로부터 문자, 문자열 받기
/***********************************************************/

#if 0

#include <stdlib.h>

int main(void)
{
	char r;
	char p[128];

	Uart2_Printf("\n키보드로부터 문자, 문자열 받기\n");

	for(;;)
	{
		Uart2_Printf("\n글자 : ");
		r = Uart2_Get_Char();
		Uart2_Printf("%c\n", r);
		if(r == 'x') break;
	}

	for(;;)
	{
		Uart2_Printf(".");
		TIM_Delay_ms(200);
		r = Uart2_Get_Pressed();
		Uart2_Printf("%c", r);
		if(r == 'x') break;
	}

	for(;;)
	{
		Uart2_Printf("\n문자열 : ");
		Uart2_Get_String(p);
		Uart2_Printf("%s", p);
	}

	return 0;
}

#endif

/***********************************************************/
// [실습 24] LED 깜박이며 # 인쇄하기
/***********************************************************/

#if 0

int main(void)
{
	Uart2_Printf("\nLED 깜박이며 # 인쇄하기\n");

	for(;;)
	{
		RGB_Put_Pixel(3, 3, RED);
		TIM_Delay_ms(1000);
		RGB_Put_Pixel(3, 3, BLUE);
		TIM_Delay_ms(1000);
		Uart2_Printf("#");
	}

	return 0;
}

#endif

/***********************************************************/
// [실습 25] 타이머 인터럽트 사용
/***********************************************************/

#if 0

int main(void)
{
	unsigned int color = RED;

	Uart2_Printf("\n타이머 인터럽트 사용\n");

	Timer3_Period = 1000;
	Timer3_Flag_on = 0;
	TIM3_Start();

	for(;;)
	{
		if(Timer3_Flag_on)
		{
			RGB_Put_Pixel(2, 2, color);
			color = (color == RED) ? (BLUE) : (RED);
			Timer3_Flag_on = 0;
		}

		Uart2_Printf("$");
		TIM_Delay_ms(100);
	}

	return 0;
}

#endif


/***********************************************************/
// [실습 26-1] LED들이 서로 다른 시간에 깜박거리려면?
/***********************************************************/

#if 0

static unsigned int limit[] = {1, 2, 4};
static unsigned int num[] = {0, 0, 0};
static unsigned int tflag[] = {0, 0, 0};

void chk_timer(void)
{
	int i;

	Timer3_Flag_on = 0;

	for(i=0; i<(sizeof(limit)/sizeof(limit[0])); i++)
	{
		num[i] = (num[i] + 1) % limit[i];
		if(num[i] == 0) tflag[i] = 1;
	}
}

int main(void)
{
	unsigned int c[] = {RED, GREEN, BLUE};

	Uart2_Printf("\nLED들이 서로 다른 시간에 깜박거리려면?\n");

	Timer3_Period = 250;
	Timer3_Flag_on = 0;
	TIM3_Start();

	for(;;)
	{
		if(Timer3_Flag_on)
		{
			chk_timer();

			if(tflag[0])
			{
				RGB_Put_Pixel(2, 2, c[0]);
				c[0] = (c[0] == BLACK) ? (RED) : (BLACK);
				tflag[0] = 0;
			}

			if(tflag[1])
			{
				RGB_Put_Pixel(3, 2, c[1]);
				c[1] = (c[1] == BLACK) ? (GREEN) : (BLACK);
				tflag[1] = 0;
			}

			if(tflag[2])
			{
				RGB_Put_Pixel(4, 2, c[2]);
				c[2] = (c[2] == BLACK) ? (BLUE) : (BLACK);
				tflag[2] = 0;
			}
		}

		Uart2_Printf("$");
		TIM_Delay_ms(100);
	}

	return 0;
}

#endif

/***********************************************************/
// [실습 26-2] 구조체 활용 및 코드 최적화
/***********************************************************/

#if 0

struct _dice {
	unsigned int color;
	unsigned int limit;
	unsigned int num;
	unsigned int tflag;
};

struct _dice dice[3] = { {RED, 1,}, {GREEN, 2}, {BLUE, 3} };

void chk_timer(void)
{
	int i;
	Timer3_Flag_on = 0;

	for(i=0; i<(sizeof(dice)/sizeof(dice[0])); i++)
	{
		dice[i].num = (dice[i].num + 1) % dice[i].limit;
		if(dice[i].num == 0) dice[i].tflag = 1;
	}
}

int main(void)
{
	int i;
	Uart2_Printf("\nLED들이 서로 다른 시간에 깜박거리려면?\n");

	Timer3_Period = 250;
	Timer3_Flag_on = 0;
	TIM3_Start();

	for(;;)
	{
		if(Timer3_Flag_on)
		{
			chk_timer();

			for(i=0; i<(sizeof(dice)/sizeof(dice[0])); i++)
			{
				if(dice[i].tflag)
				{
					RGB_Put_Pixel(2, 2, dice[i].color);
					dice[i].color = (dice[i].color == BLACK) ? (RED) : (BLACK);
					dice[i].tflag = 0;
				}
			}
		}
		Uart2_Printf("$");
		TIM_Delay_ms(100);
	}

	return 0;
}

#endif

/***********************************************************/
// [실습 27] 주사위 던지기
/***********************************************************/

#if 0

int main(void)
{
	Uart2_Printf("\n주사위 던지기\n");

	{
		int i;
		char x = 0, y = 0;

		RGB_Set_View_Port(0, 0);
		RGB_Clr_Screen(BLACK);

		for(i=0; i<2; i++)
		{
			Uart2_Printf("Please Draw Dice(Press Key): [%d]\n", i+1);

			KEY_Wait_Key_Pressed();

			x = 0;

			while(KEY_Get_Key_Pressed())
			{
				y = x + '1';
				RGB_Eng_Putch(0, 0, COLOR[(rand()%7)+1], BLACK, y);
				x++;
				x %= 6;
				TIM_Delay_ms(100);
			}

			RGB_Eng_Putch(0, 0, (i ? GREEN : BLUE), BLACK, y);
			Uart2_Printf("Dice #%d => %c\n", i, y);
			TIM_Delay_ms(1000);
		}
	}

	return 0;
}

#endif

/***********************************************************/
// [실습 28] 슬롯 머신
/***********************************************************/

#if 0

int main(void)
{
	Uart2_Printf("\n슬롯 머신\n");

	{
		Uart2_Printf("Push the Switch\n");

		KEY_Wait_Key_Pressed();
		KEY_Wait_Key_Released();

		RGB_Set_View_Port(0, 0);
		RGB_Clr_Screen(BLACK);

		for(;;)
		{
			int delay = 50;
			int press = 0;
			signed char x = 0;
			int i;

			for(;;)
			{
				x %= 100;
				IMG_Num_Disp_2digit(0, 0, x, GREEN, BLACK);
				x++;
				TIM_Delay_ms(delay);
				if(KEY_Get_Key_Pressed()) press = 1;
				if(press) delay += 50;
				if(delay > 1000) break;
			}

			for(i=0; i<3; i++)
			{
				TIM_Delay_ms(250);
				RGB_Set_View_Port(8, 8);
				TIM_Delay_ms(250);
				RGB_Set_View_Port(0, 0);
			}

			IMG_Num_Disp_2digit(0, 0, x, RED, BLACK);
			KEY_Wait_Key_Released();
			Uart2_Printf("Again? Push the Switch\n");
			KEY_Wait_Key_Pressed();
			KEY_Wait_Key_Released();
		}
	}

	return 0;
}

#endif

/***********************************************************/
// [예제 29] Virtual Display와 View Port
/***********************************************************/

#if 0

int main(void)
{
	Uart2_Printf("\nVirtual Display와 View Port\n");

	IMG_Num_Disp_2digit(0, 0, 1, RED, BLACK);
	IMG_Num_Disp_2digit(8, 0, 23, BLUE, BLACK);
	IMG_Num_Disp_2digit(0, 8, 45, GREEN, BLACK);
	IMG_Num_Disp_2digit(8, 8, 67, WHITE, BLACK);

	for(;;)
	{
		int i;

		{
			RGB_Set_View_Port(0, 0);
			TIM_Delay_ms(1000);
			RGB_Set_View_Port(8, 0);
			TIM_Delay_ms(1000);
			RGB_Set_View_Port(0, 8);
			TIM_Delay_ms(1000);
			RGB_Set_View_Port(8, 8);
			TIM_Delay_ms(1000);

			for(i=0; i<=8; i++)
			{
				RGB_Set_View_Port(i, i);
				TIM_Delay_ms(1000);
			}
		}
	}

	return 0;
}

#endif

/***********************************************************/
// [실습 30] 움직이는 그림 - Display 위치 변경
/***********************************************************/

#if 0

int main(void)
{
	Uart2_Printf("\n움직이는 그림 - Display 위치 변경\n");

	{
		int y, old = -1;
		unsigned int color = RED;

		RGB_Set_View_Port(0, 8);

		for(;;)
		{
			for(y=16; y>=0; y--)
			{
				if(old != -1)
				{
					RGB_Draw_Bar(0, old, 7, old+7, BLACK);
				}
				IMG_Icon_Disp(0, y, 0, color = (color == RED) ? GREEN : RED, BLACK);
				old = y;
				TIM_Delay_ms(250);
			}
		}
	}

	return 0;
}

#endif

/***********************************************************/
// [실습 31] 움직이는 그림 - View Port 위치 변경
/***********************************************************/

#if 0

int main(void)
{
	Uart2_Printf("\n움직이는 그림 - View Port 위치 변경\n");

	{
		int y;
		unsigned int color = RED;

		for(;;)
		{
			for(y=0; y<=16; y++)
			{
				IMG_Icon_Disp(0, 8, 0, color = (color == RED) ? BLUE : RED, BLACK);
				RGB_Set_View_Port(0, y);
				TIM_Delay_ms(250);
			}
		}
	}

	return 0;
}

#endif

/***********************************************************/
// [실습 32] Buzzer 출력 함수
/***********************************************************/

#if 0

#define BASE  (500)

enum key{C1, C1_, D1, D1_, E1, F1, F1_, G1, G1_, A1, A1_, B1, C2, C2_, D2, D2_, E2, F2, F2_, G2, G2_, A2, A2_, B2};
enum note{N16=BASE/4, N8=BASE/2, N4=BASE, N2=BASE*2, N1=BASE*4};

const unsigned char tone[] = {C1,D1,E1,F1,G1,A1,B1,C2};
const int song[][2] = {{G1,N4},{G1,N4},{E1,N8},{F1,N8},{G1,N4},{A1,N4},{A1,N4},{G1,N2},{G1,N4},{C2,N4},{E2,N4},{D2,N8},{C2,N8},{D2,N2}};

int main(void)
{
	int i;

	Uart2_Printf("\nBuzzer 출력 함수 실험\n");

	for(i=0; i<(sizeof(tone)/sizeof(tone[0])); i++)
	{
		Buzzer_Beep(tone[i], N4);
	}

	TIM_Delay_ms(1000);

	for(i=0; i<(sizeof(song)/sizeof(song[0])); i++)
	{
		Buzzer_Beep(song[i][0], song[i][1]);
	}

	return 0;
}

#endif

/***********************************************************/
// [실습 33] Joystick 제어 함수
/***********************************************************/

#if 0

#include <stdlib.h>

#define BASE  (500)

enum key{C1, C1_, D1, D1_, E1, F1, F1_, G1, G1_, A1, A1_, B1, C2, C2_, D2, D2_, E2, F2, F2_, G2, G2_, A2, A2_, B2};
enum note{N16=BASE/4, N8=BASE/2, N4=BASE, N2=BASE*2, N1=BASE*4};

const unsigned char tone[] = {C1,D1,E1,F1,G1,A1,B1,C2};

#define UP		2
#define DOWN	3
#define LEFT	4
#define RIGHT	1
#define PUSH	5

int main(void)
{
	unsigned int key = 0;
	int lock = 0;
	int i = 0;

	Uart2_Printf("\nJoystick 제어 함수\n");

	for(;;)
	{
		key = JOYSTICK_Get_Joystick_Pressed();

		if((lock == 0) && (key != 0))
		{
			Uart2_Printf("%u번 키가 눌림\n", key);
			lock = 1;

			if(key == UP)
			{
				Buzzer_Beep(tone[i++], N4);
				if(i==8) i=7;
			}

			else if(key == DOWN)
			{
				Buzzer_Beep(tone[i--], N4);
				if(i==-1) i=0;
			}
		}

		else if((lock == 1) && (key == 0))
		{
			lock = 0;
		}
	}

	return 0;
}

#endif

/***********************************************************/
// [미니 프로젝트] Street Frog
/***********************************************************/

#if 0

#define BASE  (500)

enum key{C1, C1_, D1, D1_, E1, F1, F1_, G1, G1_, A1, A1_, B1, C2, C2_, D2, D2_, E2, F2, F2_, G2, G2_, A2, A2_, B2};
enum note{N16=BASE/4, N8=BASE/2, N4=BASE, N2=BASE*2, N1=BASE*4};

#define UP		2
#define DOWN	3
#define LEFT	4
#define RIGHT	1
#define PUSH	5

int x, y, oldx, oldy;
int mx, my, moldx, moldy;
int lock, dir, move, key;
int frog, score, turn;

void init_game(void)
{
	x = 3;
	y = 0;
	oldx = x;
	oldy = y;
	mx = 0;
	my = 4;
	moldx = mx;
	moldy = my;
	dir = 1;
	lock = 0;
	move = 0;
	key = 0;
	frog = 1;
	score = 0;
	turn = 0;

	RGB_Clr_Screen(BLACK);
	RGB_Put_Pixel(x,y,GREEN);

	Timer3_Period = 200;
	Timer3_Flag_on = 0;
	TIM3_Start();
}

void car_move(void)
{
	Timer3_Flag_on = 0;

	if(dir == 1) mx++;
	else mx--;

	if(mx > 7)
	{
		mx = 6;
		dir = 0;
	}

	if(mx < 0)
	{
		mx = 1;
		dir = 1;
	}

	RGB_Put_Pixel(moldx,moldy,BLACK);
	RGB_Put_Pixel(mx,my,BLUE);

	moldx = mx;
	moldy = my;
}

void frog_move(void)
{
	if(key == PUSH)
	{
		RGB_Put_Pixel(x,y,RED);
		Buzzer_Beep(C2,N4);
	}

	else
	{
		switch(key)
		{
			case 1: x++; if(x>7) x = 7; Buzzer_Beep(C1,N16); break;
			case 2: y--; if(y<0) y = 0; Buzzer_Beep(D1,N16); break;
			case 3: y++; if(y>7) y = 7; Buzzer_Beep(E1,N16); break;
			case 4: x--; if(x<0) x = 0; Buzzer_Beep(F1,N16); break;
		}

		lock = 1;
		move = 1;
	}

	if(move == 1)
	{
		RGB_Put_Pixel(oldx,oldy,BLACK);
		RGB_Put_Pixel(x,y,GREEN);

		move = 0;
		oldx = x;
		oldy = y;
	}
}

int check_frog(void)
{
	if((mx == x) && (my == y))
	{
		RGB_Put_Pixel(x,y,YELLOW);
		Buzzer_Beep(C1,N1);
		TIM_Delay_ms(500);
		IMG_Num_Disp_2digit(0,0,score,GREEN,BLACK);
		return 0;
	}

	if((turn == 0) && (y == 7))
	{
		turn = 1;
	}

	if((turn == 1) && (y == 0))
	{
		Buzzer_Beep(G1,N16);
		score++;
		if(Timer3_Period > 10) Timer3_Period -= 10;
		turn = 0;
	}

	return 1;
}

int main(void)
{
	Uart2_Printf("Street Frog!\n");

	init_game();

	for(;;)
	{
		if(Timer3_Flag_on == 1)
		{
			car_move();
		}

		key = JOYSTICK_Get_Joystick_Pressed();

		if((lock == 0) && (key != 0))
		{
			Uart2_Printf("Joy Key = %d\n", key);
			frog_move();
		}

		if((lock == 1) && (key == 0))
		{
			lock = 0;
		}

		frog = check_frog();

		if(frog == 0)
		{
			Uart2_Printf("Game Over!\n");
			break;
		}

	}

	return 0;
}

#endif
