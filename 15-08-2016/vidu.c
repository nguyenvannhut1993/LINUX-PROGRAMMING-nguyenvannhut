#include <stdio.h>
void main()
{
	int x =45;
	int *y = &x;
	*y = 92;
	printf("gia tri cua x: la : %d",x);
}
