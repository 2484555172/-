#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



int main(void)
{

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10-1 - i; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}








//int main(void)
//{
//
//
//		printf("©¥©¥©Ò ©Ö©× ©±©¶©²©Ö©¶ ¨q¨r\n");
//		printf("©±©¶©§ ©¹©è ©º©¿©Â©Þ©¾    \ /\n");
//		printf("©º©¿©¾£§©§©c ©»©¥©¾ ©ˆ\n");
//		printf(" _  _              \n");
//		printf("¨q©¼©¸©¼©¸¨r\n");
//		printf("©¸©´£®£®©°©¼©¤©¤©¤©¤¨r\n");
//		printf("¨q©Ø©¤©¤©È          ©À¨r\n");
//		printf("©¦£ï¡¡£ï©¦          ©¦ ¡ñ\n");
//		printf("¨t©¤©Ð©¤¨s          ©¦\n");
//		printf("    HAPPY  NEW    YEAR\n"); 
//	
//
//	return 0;
//}






