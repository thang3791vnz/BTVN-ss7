#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		char loainv;
	int mucluong;
	printf("ho va ten : ");
	scanf("%d", &loainv);
	
	printf("Nhap muc luong: ");
	scanf("%d", &mucluong);
	
	if(loainv=='A')
	{
		printf("\n\nBan la nhan vien loai A, Tien tro cap cua ban la 300!\n");
		printf("Luong cuoi thang cua ban la: %d\n", mucluong+300);
	}
	else if(loainv=='B')
	{
		printf("\n\nBan la nhan vien loai B, Tien tro cap cua ban la 250!\n");
		printf("Luong cuoi thang cua ban la: %d\n", mucluong+250);
	}
	else
	{
		printf("\n\nNhan vien rot bia, Tien tro cap cua ban la 100\n");
		printf("Luong cuoi thang cua ban la: %d\n", mucluong+100);
	}
	return 0;
}
