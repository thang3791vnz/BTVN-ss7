#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float diem;
	printf("Nhap vao so diem thi cua ban: ");
	scanf("%f", &diem);
	if (diem >= 75)
	{
		printf("\nDiem so cua ban la: %.1f", diem);
		printf("\nHoc sinh loai A");
	}
	else 
	if (diem >= 60)
	{
		printf("\nDiem so cua ban la : %.1f, diem");
		printf("\nHoc sinh loai B");
	}
	else
	if (diem >=45)
	{
		printf("\nDiem so cua ban la : %.1f", diem);
		printf("\nHoc sinh loai C");
	}
	else
	if (diem <= 35)
	{
		printf("\nDiem so cua ban la : %.1f", diem);
		printf("\nHoc sinh loai D");
		printf("\nCong Ty TNHH ve sinh Thanh Pho xin han hanh chao don ban :D");
	}
	return 0;
}
