#include <stdio.h>

int main () {
	int a , b , c;
	printf ("moi ban nhap so thu nhat ");
	scanf("%d", &a);
	printf ("moi ban nhap so thu hai ");
	scanf("%d", &b);
	printf ("moi ban nhap so thu ba ");
	scanf("%d", &c);
	if (a>b && b>c) {
		printf (" sap xep : %d %d %d", c ,b ,a);
	} else if (a>c && c>b) {
		printf (" sap xep : %d %d %d", b ,c ,a);
	} else if (b>a && a>c) {
		printf (" sap xep : %d %d %d", c ,a ,b);
	} else if (b>c && c>a) {
		printf (" sap xep : %d %d %d", a ,c ,b);
	} else if (c>a && a>b) {
		printf (" sap xep : %d %d %d", b ,a ,c);
	} else if (c>b && b>a) {
		printf (" sap xep : %d %d %d", a ,b ,c);
	}
}
