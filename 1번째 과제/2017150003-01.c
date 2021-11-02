#include <stdio.h>
int main()
{
	int base,exponent;
	
	printf("밑을 입력하시오:");
	scanf("%d",&base);

	printf("지수를 입력하시오:");
	scanf("%d",&exponent);

	int i;
	int result=1;

	for (i=0;i<exponent;i++)
	{
		result=result*base;
	}

	printf("출력값:%d\n",result);
	

	return 0;
}	
