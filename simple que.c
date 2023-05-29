#include<stdio.h>
int main(){
	int w,k,n,total_cost;
	printf("Enter the number of bananas:");
	scanf("%d",&w);
	printf("Enter the cost of one banana:");
	scanf("%d",&k);
	printf("Enter the money the soldier have:");
	scanf("%d",&n);
	total_cost = (w/2)*(k*(w+1));
	int borrow=total_cost-n;
	if(borrow<0){
		printf("The soldier have enough money to buy bananas.\n ");
		
	}
	else{
		printf("The soldiers need to borrow %d dollars\n");
		
	}
	return 0;
}
