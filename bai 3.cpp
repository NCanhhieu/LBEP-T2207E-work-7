#include <stdio.h>
int main ( ) {
	//freopen("input.txt", "r", stdin);
	printf ( " nhap n nguyen :  \n") ;	
	int n;
	scanf("%d", &n);
	int a[n];
	printf (" nhap mang a:  \n");
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int min = a[0];
	int max = 0;
	for (int i = 0; i < n; i++) {  
	    if ( a[i] > max ) {
	    	max = a[i];
		}
		if ( a[i] <= min) {
			min = a[i];
		}
	}
	printf(" doan [%d, %d] bao ham gia tri tren mang", min, max);
return 0;	
}
	
