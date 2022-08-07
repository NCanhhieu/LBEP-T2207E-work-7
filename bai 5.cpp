#include <stdio.h>

int main ( ) {
	printf ( " nhap n nguyen duong :  \n") ;	
	int n;
	do {
		scanf("%d", &n);
		if ( n<= 0) { printf(" n phai nguyen duong, nhap lai \n");
		}
	} while ( n<= 0);
	
	int a[n];
	int i=0;
	int x,j;
	printf (" nhap mang a:  \n");
    while ( i < n) {
    	scanf("%d",&x);
    	bool t = false;
    	for (j = 0; j < i ; j++) {
    	if ( x == a[j]) {
    		t = true;
    		break;  } }
    	if ( t)	 { printf (" %d bi trung, nhap lai \n", x);
		} else {
    			a[i] = x;
    			i++;
		}
	}
	printf ( " mang da nhap la : \n");
	for ( int k = 0; k < n; k++) {
		printf("%d", a[k]);
	} printf ("\t");
return 0;
}
