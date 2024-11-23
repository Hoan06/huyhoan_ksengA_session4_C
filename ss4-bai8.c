#include <stdio.h>

int main () {
	int a , b , c;
	printf("moi ban nhap canh thu nhat");
	scanf("%d", &a);
	printf("moi ban nhap canh thu hai");
	scanf("%d", &b);
	printf("moi ban nhap canh thu ba");
	scanf("%d", &c);
	if (a+b>c || a+c>b || b+c>a) {
		printf ("la 3 canh tam giac");
	} else {
		printf ("khong phai la 3 canh tam giac");
	}
}
