#include "stm32f0xx.h"

/* TYPE DEFINITION */

typedef struct
{
  uint8_t RTC_Hours;    /*!< Specifies the RTC Time Hour.
                        This parameter must be set to a value in the 0-12 range
                        if the RTC_HourFormat_12 is selected or 0-23 range if
                        the RTC_HourFormat_24 is selected. */

  uint8_t RTC_Minutes;  /*!< Specifies the RTC Time Minutes.
                        This parameter must be set to a value in the 0-59 range. */

  uint8_t RTC_Seconds;  /*!< Specifies the RTC Time Seconds.
                        This parameter must be set to a value in the 0-59 range. */

  uint8_t RTC_H12;      /*!< Specifies the RTC AM/PM Time.
                        This parameter can be a value of @ref RTC_AM_PM_Definitions */
}RTC_TimeTypeDef;

typedef unsigned char UC;
typedef unsigned short US;
typedef unsigned int UI;

/* SYSTEM VARIABLES */

extern volatile uint32_t Timer3_Counter;
extern volatile uint32_t Timer3_Period;
extern volatile uint32_t Timer3_Flag_on;
extern volatile uint32_t Key_value;
extern RTC_TimeTypeDef RTC_Time;

/* SYSTEM */

extern void Board_Init(void);

/* UART */

extern void Uart2_Init(int baud);
extern void Uart2_Send_Byte(unsigned char data);
extern char Uart2_Get_Pressed(void);
extern void Uart2_Send_String(unsigned char *pt);
extern void Uart2_Printf(char *fmt,...);
extern char Uart2_Get_Char(void);
extern void Uart2_Get_String(char *string);
extern int Uart2_Get_Int_Num(void);

/* LED */

extern void LED_Display(int on);

/* KEY */

extern void KEY_Init(void);
extern int KEY_Get_Key_Pressed(void);
extern void KEY_IRQ_Init(void);
extern int KEY_Wait_Key_Pressed(void);
extern void KEY_Wait_Key_Released(void);

/* TIMER */

extern void TIM_Delay_ms(unsigned int time);
extern unsigned int  RTC_Get_Time(RTC_TimeTypeDef* RTC_TimeStruct);
extern void TIM3_Start(void);
extern void TIM3_Stop(void);

/* GRAPHICS */

extern void RGB_Set_View_Port(int x, int y);
extern void RGB_Put_Pixel(int x, int y, unsigned int color);
extern unsigned int RGB_Get_Pixel(int x, int y);
extern void RGB_Set_Trans_Mode(unsigned int mode);
extern void RGB_Set_Chroma_Mode(unsigned int mode);
extern void RGB_Set_Key_Color(unsigned int mode);
extern unsigned int RGB_Get_Trans_Mode(void);
extern unsigned int RGB_Get_Chroma_Mode(void);
extern void RGB_Draw_Bar(int x1, int y1, int x2, int y2, UI color);
extern void RGB_Draw_Rect(int x1, int y1, int x2, int y2, UI color);
extern void RGB_Draw_Vline(int x, int y1, int y2, UI color);
extern void RGB_Draw_Hline(int y, int x1, int x2, UI color);
extern void RGB_Draw_Line(int x1,int y1,int x2,int y2,UI color);
extern void RGB_Clr_Screen(UI color);
extern void RGB_Draw_BMP(int x, int y, const unsigned short int *fp);
extern void RGB_Eng_Putch(int x,int y,int color,int bkcolor,int data);
extern void IMG_Draw_Img(int x,int y,unsigned int img[8][8]);
extern void IMG_Copy_Img(unsigned int d[8][8], unsigned int s[8][8]);
extern void IMG_Num_Disp(int x, int y, int pos, int num, unsigned int c, unsigned int bc);
extern void IMG_Num_Disp_2digit(int x, int y, int num, unsigned int c, unsigned int bc);
extern void IMG_Icon_Disp(int x, int y,unsigned int num, unsigned int c, unsigned int bc);

/*  JOYSTICK  */

extern void JOYSTICK_Init(void);
extern int JOYSTICK_Wait_Joystick_Pressed(void);
extern void JOYSTICK_Wait_Joystick_Released(void);
extern int JOYSTICK_Get_Joystick_Pressed(void);

/*  BUZZER  */

extern void Buzzer_Init(void);
extern void Buzzer_On(void);
extern void Buzzer_Off(void);
extern void Buzzer_Set(int s);
extern void Buzzer_Beep(int tone, int note);

