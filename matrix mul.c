#include <stdio.h>
int main(){
	int i,j,a[10][10],b[10][10],mul[10][10],k,m,n;
	printf("enter the number of rows:");
	scanf("%d",&m);
	printf("enter the number of columns");
	scanf("%d",&n);
	printf("enter the elements of first matrix:");
	for(i=0;i<m;i++)
	for (j=0;j<n;j++){
		scanf("%d",&a[i][j]);
	}
	printf("enter the elements of second matrix:");
	for(i=0;i<m;i++)
	for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	for(i=0;i<m;i++)
		for(j=0;j<n;j++){
			mul[i][j]=0;
			for(k=0;k<n;k++){
		mul[i][j]+= a[i][k]*b[k][j];
	}
	}
	printf("the mul of two matrices is:\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++){
		printf("%d  ",mul[i][j]);
		if(j==n-1){
			printf("\n\n");
		}
	}
	return 0;
}

