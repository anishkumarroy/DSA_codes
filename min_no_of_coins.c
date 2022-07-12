#include<stdio.h>
int main()
{
	int amt, coins[10]={1,2,5,10,20,50,100,200,500,2000}, count=0; scanf("%d", &amt); int i,c=amt;
	for(i=10;i>0;i--)
	{
		count=count+c/coins[i];
		c=c%coins[i];
	}
	printf("Minimum number of required coins are %d", count);
}

		
	
