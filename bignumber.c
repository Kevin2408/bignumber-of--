#include <stdlib.h>
#include <stdio.h>

int main(){
	int count=0 ;
	int n ;
	printf("please enter a integer : ") ;
	scanf("%d" , &n) ;
	short a[200] ; // 先宣告一個矩陣(存取數字的矩陣)
	int m=0 , k , i , carry=0 ; // m 代表位數 ，k 是算階乘時的數字 ，i 是矩陣內每個位子的數值 ，carry 是進位的數字
	for (i=0 ; i<200 ; i++) //把每個位數都定為0
		a[i]=0 ;
	a[m]=1 ; //定個位數為1
	for (k=2 ; k<=n ; k++){
		for (i=0 ; i<=m ; i++){
			a[i]=a[i]*k ; //每一位乘k
			a[i]=a[i]+carry ;
			if((carry=a[i]/10)!=0 && i==m)
				m++ ; 
			a[i]=a[i]%10 ;
			count+=1 ;
		}
		count=0 ;
	}
	printf("%d!=" , n) ;
	for (i=m ; i>=0 ; i--){
		printf("%d" , a[i]) ;
	}
	printf("\n") ;
	system("pause") ;

}