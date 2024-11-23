#include <stdio.h>

int main() {
	int a , b , c;
	printf("moi ban nhap so thu nhat ");
	scanf("%d", &a);
	printf("moi ban nhap so thu hai ");
	scanf("%d", &b);
	printf("moi ban nhap so thu ba ");
	scanf("%d", &c);
	if (a<c<b || b<c<a) {
		printf (" so thu ba nam trong giua hai so");
	} else {
		printf("so thu ba khong nam trong giua hai so");
	}
	return 0;
}
