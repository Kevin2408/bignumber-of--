#include <stdlib.h>
#include <stdio.h>

int main(){
	int n ;
	printf("please enter a integer : ") ;
	scanf("%d" , &n) ;
	short a[200] ;
	int m=0 , k , i , carry=0 ;
	for (i=0 ; i<200 ; i++)
		a[i]=0 ;
	a[m]=1 ;
	for (k=2 ; k<=n ; k++){
		for (i=0 ; i<=m ; i++){
			a[i]=a[i]*k ;
			a[i]=a[i]+carry ;
			if((carry=a[i]/10)!=0 && i==m)
				m++ ;
			a[i]=a[i]%10 ;
		}
	}
	printf("%d!=" , n) ;
	for (i=m ; i>=0 ; i--){
		printf("%d" , a[i]) ;
	}
	printf("\n") ;
	system("pause") ;

}