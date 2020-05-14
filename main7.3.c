#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b;
	printf("Nhap vao so thu nhat: ");
	scanf("%f", &a);
	printf("Nhap vao so thu hai: ");
	scanf("%f", &b);
	if(a-b==a)
	{
		printf("Hieu bang gia tri %d !", a);
		if(a-b==b)
		 printf("Hieu bang gia tri %d !", b);
	}
	else
	 printf("Hieu khong bang bat ky gia tri nao duoc nhap!");
	return 0;
}
