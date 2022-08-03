#include <stdio.h>

int main ( ) {
	printf ( " nhap n nguyen :  \n") ;	
	int n;
	scanf("%d", &n);
	int a[n];
	int b[n];
	printf (" nhap mang a:  \n");
	scanf("%d", &a[0]);
	for (int i = 1; i < n; i++) {
	  for ( int j = i - 1; j >= 0; j--) {
	  	 do  {
	  	 	scanf("%d", &a[i]);
	  	 	if (a[i] == a[j]) {
	  	 		printf (" nhap lai \n");
	  	 		}else { break;
				   }
			} while (a[i] == a[j]);
			break;
		   }
	  }

return 0;
}
