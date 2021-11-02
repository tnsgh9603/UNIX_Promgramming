#include "memo.h"

int main()
{
	int i,j;
	printf("정수 i와 j를 입력하시오:");
	scanf("%d %d", &i, &j);
	
	printf("i의 아스키 코드값은 :%c\n", ascii(i));
	printf("i의 8진수 표현은 :%o\n", convert(i));
	printf("i**j의 값은 : %d\n", expo(i,j));
	printf("i+j의 값은 : %d\n",sum(i,j));

	return 0;
}
