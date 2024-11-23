#include <stdio.h>

int main() {
	int a;
	printf("moi ban nhap vao so nguyen ");
	scanf("%d",&a);
	if (a%3==0 && a%5==0){
		printf("chia het cho ca 3 va 5");
	} else if(a%3==0) {
		printf ("chia het cho 3");
	} else if (a%5==0){
		printf("chia het cho 5");
	} else {
		printf("khong chia het cho ca 3 va 5");
	}
	
	return 0;
}
