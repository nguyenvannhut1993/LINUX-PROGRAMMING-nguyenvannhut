#include <stdio.h>
// #include <conio.h>
#include <stdlib.h>

struct phanso
{
	int tu;
	int mau;
};

typedef struct phanso PHANSO;

int main()
{
	PHANSO *c;
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	c = (PHANSO*)malloc(n);
	for (int i = 0; i < n; i++)
	{
		printf("Nhap phan so thu %d\n", i);
		printf("Nhap tu:");
		scanf("%d", &(c+i)->tu);
		printf("Nhap mau:");
		scanf("%d", &(c+i)->mau);
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d/%d\n", (c+i)->tu,(c+i)->mau);
	}
	free(c);
	return 0;
}