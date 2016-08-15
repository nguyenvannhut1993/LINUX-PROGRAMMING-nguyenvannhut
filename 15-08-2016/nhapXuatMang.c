#include <stdio.h>

struct phanso 
{
	int tu;
	int mau;
};
typedef struct phanso PHANSO;
void nhapMang(PHANSO &x);
void xuat(PHANSO x);
int main()
{
	PHANSO *c;
	int n;
	printf("Nhap so phan tu mang:\n");
	scanf("%d",&n);
	c = new PHANSO[n];
	for(int i=0; i <n; i++)
	{
		printf("nhap phan tu thu :%d \n",i );
		nhapMang(c[i]);
	}
	for(int i=0;i <n ;i++)
	{
		xuat(c[i]);
	}
	delete c;
	return 0;
}
void nhapMang(PHANSO &x)
{
	printf("Nhap tu:");
	scanf("%d",&x.tu);
	printf("Nhap mau:");
	scanf("%d",&x.mau);
	
}
void xuat(PHANSO x)
{
	printf("%d/%d \n",x.tu,x.mau );
}