#include<stdio.h>
int main(){
	int i,n1=0,n2=1,n3=0,a;
	printf("enter the number of elements to be printed:\n");
	scanf("%d",&a);
	printf("the fibonaci series is \n\n\n%d%d",n1,n2);
	i=2;
	while(i<a){
	n3=n1+n2;
	n1=n2;
	n2=n3;
	++i;
		printf("%d",n3);
	}

	return 0;
}
