#include <stdio.h>

int main () {
	int year;
	printf("moi ban nhap nam");
	scanf("%d", &year);
	if ((year%4==0 || year%400==0) && (year%100!=0)) {
		printf ("day la nam nhuan");
	} else {
		printf("day khong phai la nam nhuan");
	}
	
	return 0;
}
