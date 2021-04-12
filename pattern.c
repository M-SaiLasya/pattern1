#include<stdio.h> 
void main() {
	int i,j,n;
	printf("Enter number of stairs you need:");
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
		for(j=1;j<=i;j++) {
			printf("01");
		}
		printf("\n");
	}
}
