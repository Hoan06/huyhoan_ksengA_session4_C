#include <stdio.h>

int main() {
	int chiSomoi , chiSocu;
	int soDien , soTien;
	printf("Nhap chi so cu ");
    scanf("%d", &chiSocu);
    printf("Nhap chi so moi ");
    scanf("%d", &chiSomoi);
    soDien = chiSomoi - chiSocu;
	if (soDien>0 && soDien<50) {
		soTien = soDien*10000;
		printf("so tien ban can tra la %d dong", soTien);
	} else if (soDien>=50 && soDien<100) {
		soTien = soDien*15000;
		printf ("so tien ban can tra la %d dong", soTien);
	} else if (soDien>=100 && soDien<150) {
		soTien = soDien*20000;
		printf("so tien ban can tra la %d dong", soTien);
	} else if (soDien>=150 && soDien<200) {
		soTien = soDien*25000;
		printf ("so tien ban can tra la %d dong ", soTien);
	} else if (soDien>=200) {
		soTien = soDien*30000;
		printf ("so tien ban can tra la %d dong ", soTien);
	} else if (soDien<0) {
		printf (" so dien khong hop le");
	}
	
	
	return 0;
}
