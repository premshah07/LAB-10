#include<stdio.h>
void main(){
	int n,i=1,sum=0;
	printf("Enter number:");
	scanf("%d",&n);
	while(i<n){
		if(n%i==0){
			sum=sum+i;
			//i++;
		}
		i++;
    }

		if(sum==n){
			printf("Perfect number");
		}
		else{
			printf("Not perfect");
		}
	
		//i++;
}
