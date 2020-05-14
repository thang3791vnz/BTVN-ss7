#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, z;
	printf("\nNhap hai so lan luot la a va b :", a, b);
	scanf("%d%d", &a, &b);
	
	z = (a,b);
	{
		if (z == 0)
		printf("\na chia het cho b");
		else
		printf("\na khong chia het cho b");
	}
	return 0;
}
