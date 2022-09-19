#include <stdio.h>
int main(){
	int i,n,a[100];
	printf("enter the number of elements in the array:\n");
	scanf("%d",&n);
	printf("enter the elements of the array:\n");
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
	
	printf("the even numbers are:\n");
	for(i=0;i<n;i++){
		if(a[i]%2==0){
		printf("%d\t",a[i]);
		}
	}
	printf("the odd numbers are:\n");
	for(i=0;i<n;i++){
		if(a[i]%2==1){
			printf("%d\t",a[i]);
		}
	}
	return 0;
}
