#include<stdio.h>

 int main()
{
	int i,A,B;
	int sum;
		scanf("%d %d",&A,&B);
		for(i=A; i<=B; i++){
			sum+=i;
		}
		printf("%d\n",sum);

}
