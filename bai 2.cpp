#include <stdio.h>

int main ( ) {
	printf ( " nhap n nguyen :  \n") ;	
	int n;
	scanf("%d", &n);
	int a[n];
	printf (" nhap mang a:  \n");
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	printf ( " nhap x  :  \n") ;	
	int x;
	scanf("%d", &x);
	int t=0;
	int socantim;
	int vt = 0;
	int min;
	if ( a[0] > x ) {
		min = a[0] - x;
	} else {
		min = x - a[0];
	}
	for (int i = 0; i < n; i++) {  

	    if ( a[i] > x) {
	    	t = a[i] - x;
	    	if ( t <= min) {
	    		min = t;
	    		socantim= a[i]; 
				vt = i;}
			} else {
				t = x - a[i] ;
				if ( t <= min ) {
	    		min = t;
	    		socantim= a[i]; 
				vt = i;}
		}
 
}
printf ( " gia tri trong mang so xa gia tri x nhat la %d tai %d , xa %d \n", socantim, vt, min);
return 0;
}
