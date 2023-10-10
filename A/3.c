#include<stdio.h>
void main(){
	int n,i=2,c=0;
	printf("Enter num:");
	scanf("%d",&n);
	while(i<n){
		if(n%i==0){
			c++;
			//prinf("Prime num");
		}
		i++;
		
	}
	if(c==0){
		printf("Prime Num",n);
	}
	else{
		printf("Not Prime Num",n);
	}
}
