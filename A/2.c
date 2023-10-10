#include<stdio.h>
void main(){
	int n,sum=0,count=0;
	float avg;
    printf("Enter 0 to stop prog\n");
	while(1){
		scanf("%d",&n);
		if(n==0){
			break;
		}
		sum=sum+n;
		count++;
	}
    avg=sum/count;
    printf("avg=%0.2f\n",avg);
    printf("sum=%d",sum);
}
	
		
	
	
