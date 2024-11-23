#include <stdio.h>

int main () {
	int day , month , year;
	printf("moi ban nhap ngay ");
	scanf("%d", &day);
	printf("moi ban nhap thang ");
	scanf("%d", &month);
	printf("moi ban nhap nam ");
	scanf("%d", &year);
	if (day>=1 && day<=31) {
		if (month >=1 && month <=12) {
			if (month==2 ) {
			if (day<=28) {
				printf ("hop le");
			} else {
				printf ("khong hop le");
			}
		}
		if (month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12 ) {
			if ( day<=31) {
				printf (" hop le");
			} else {
				printf ("khong hop le");
			}
		}
		if (month==4 || month==6 || month==9 || month==11) {
			if (day<=30) {
				printf ("hop le");
			} else {
				printf ("khong hop le");
			}
		}
		} else {
			printf ("khong hop le");
		}	
	} else {
		printf ("khong hop le");
	}
	  
	return 0;
}
