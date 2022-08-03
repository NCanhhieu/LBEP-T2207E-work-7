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
	int max = 0;
	int socantim = 0;
	int vt = 0;
	for (int i = 0; i < n; i++) {  
	    if ( a[i] > x) {
	    	t = a[i] - x;
	    	if ( t > max) {
	    		max = t;
	    		socantim= a[i]; 
				vt = i;}
			} else {
				t = x - a[i] ;
				if ( t > max) {
	    		max = t;
	    		socantim= a[i]; 
				vt = i;}
		}
 
}
printf ( " gia tri trong mang so xa gia tri x nhat la %d tai %d , xa %d \n", socantim, vt, max);
return 0;
}
