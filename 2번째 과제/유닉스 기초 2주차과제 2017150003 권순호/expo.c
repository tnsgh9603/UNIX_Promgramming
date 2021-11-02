#include "memo.h"

int expo(int a, int b)
{
	int i, c=1;
	for (i=0;i<b;i++)
	{
		c=c*a;
	}
	return c;
}
