#include <stdio.h>


int main(void)
{
	double rad;
	double area;
	printf("원의 반지름 입력: ");
	scanf("%lf", &rad);
	area = rad * rad * 3.1415;
	printf("원의 넓이: %f \n", area);
	
	return 0;
}




/*
	int num1 = 0, num2 = 0;
	int result = 0;

	printf("두개의 정수를 입력해 주세요. ");
	//scanf("%d", &num1);
	//scanf("%d", &num2);
	scanf("%d %d", &num1, &num2);

	printf("입력된 정수는 %d %d 입니다. \n", num1, num2);
	result = num1 + num2;
	printf("%d + %d = %d \n", num1, num2, result);

	result = num1 - num2;
	printf("%d - %d = %d \n", num1, num2, result);

	result = num1 * num2;
	printf("%d * %d = %d \n", num1, num2, result);

	result = num1 / num2;
	printf("%d / %d = %d \n", num1, num2, result);

	result = num1 % num2;
	printf("%d %% %d = %d \n", num1, num2, result);

*/


/*
int num1 = 0xA7 , num2 = 0x43;
	int num3 = 032  , num4 = 024;

	printf(" 0xA7의 10진 정수값 : %d \n ", num1);
	printf(" %x%X의 10진 정수값 : %d \n ", num1, num1);
	printf(" 0xA3의 10진 정수값 : %d \n ", num2);
	printf(" 0x%X의 10진 정수값 : %d \n ", num2, num2);

	printf(" 032의 10진 정수값 : %d \n", num3);
	printf(" 0%o의 10진 정수값 : %d \n", num3, num3);

	printf(" 024의 10진 정수값 : %d \n", num4);
	printf(" 0%o의 10진 정수값 : %d \n", num4, num4);

*/

/*char ch = 9;
	int num = 0;
	long numl = 0;
	float numf = 0.0;
	double numd = 0.0;
	printf("변수 ch의 크기 : %d \n", sizeof(ch));
	printf("변수 num의 크기 : %d \n", sizeof(num));
	printf("변수 numl의 크기 : %d \n", sizeof(numl));
	printf("변수 numf의 크기 : %d \n", sizeof(numf));
	printf("변수 numd의 크기 : %d \n", sizeof(numd));
	printf("\n\n\n");
	*/

/*
char ch = 9;
	int num = 0;
	long numl = 0;
	float numf = 0.0;
	double numd = 0.0;
	printf("변수 ch의 크기 : %d \n", sizeof(ch));
	printf("변수 num의 크기 : %d \n", sizeof(num));
	printf("변수 numl의 크기 : %d \n", sizeof(numl));
	printf("변수 numf의 크기 : %d \n", sizeof(numf));
	printf("변수 numd의 크기 : %d \n", sizeof(numd));
	printf("\n\n\n");
*/

/*

	char num1 = 1, num2 = 2, result1 = 0;
	short num3 = 300, num4 = 400, result2 = 0;

	printf("size of num1 & num2 : %d \n", sizeof(num1), sizeof(num2));
	printf("size of num3 & num4 : %d \n", sizeof(num3), sizeof(num4));
	printf("size of char add : %d \n", sizeof(num1 + num2));
	printf("size of short add : %d \n", sizeof(num3 + num4));

	result1 = num1 + num2;
	result2 = num3 + num4;
	printf("size of reasult1 & result2: %d, %d \n", sizeof(result1), sizeof(result2));
*/
