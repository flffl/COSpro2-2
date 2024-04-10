#include <stdio.h>

int main(void)
{
	float num1;
	double num2;
	long double num3;
	
	printf(" 실수 입력1(e 표기법으로) : ");
	scanf("%f", &num1);
	printf("입력한 실수 %f \n", num1);

	printf(" 실수 입력2(e 표기법으로) : ");
	scanf("%lf", &num2);
	printf("입력한 실수 %lf \n", num2);

	printf(" 실수 입력3(e 표기법으로) : ");
	scanf("%Lf", &num3);
	printf("입력한 실수 %Lf \n", num3);

	return 0;
}



/*
printf("I like programming \n");
	printf("I love puppy! \n");
	printf("I am so happy \n");
	return 0;
*/

/*
printf("test \"I am a student\" test \\");

	return 0;
*/

/*
int myAge = - -12;
	printf("my age %d, %o %#o %#x %#X \n", myAge, myAge, myAge, myAge, myAge);

	return 0;
*/

/*
int myAge = -12;
	printf(" my Age : %d \n", myAge);

	return 0;
*/

/*
	printf("%f \n", 0.1234);
	printf("%e \n", 0.1234);
	printf("%f \n", 0.123456789);
	printf("%e \n", 0.123456789);

	return 0;
*/

/*
double d1 = 1.23e-3;
	double d2 = 1.23e-4;
	double d3 = 1.23e-5;
	double d4 = 1.23e-6;

	printf("%g \n", d1);
	printf("%g \n", d2);
	printf("%g \n", d3);
	printf("%g \n", d4);

	return 0;
*/

/*
printf("%s %c \n", "AAAA", 'd');

	return 0;
*/

/*
printf("%-8s %14s %5s \n", "이 름", "미래모빌리티공학", "학년");
	printf("%-8s %14s %5s \n", "신민성", "미래모빌리티공학", "1");
	printf("%-8s %14s %5s \n", "정유찬", "미래모빌리티공학", "1");
	printf("%-8s %14s %5s \n", "이원용", "미래모빌리티공학", "1");
	printf("%-8s %14s %5s \n", "최태영", "미래모빌리티공학", "1");
	return 0;
*/

/*
int num1, num2, num3;

	printf("세 개의 정수 입력:");
	scanf("%d %o %x", &num1, &num2, &num3);
	printf(" 입력된 정수 10진 출력 : ");
	printf("%d %d %d \n", num1, num2, num3);

	return 0;
*/
