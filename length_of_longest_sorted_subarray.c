#include<stdio.h>
int main(){
	int a[10]; for(int i=0;i<10;i++) scanf("%d", &a[i]); int max=1,len=1;
	for(int i=1;i<10;i++){
	if(a[i]>a[i-1]) len++;
	else {
			if(max<len){ max=len; len=1;}
		}
		}
	if(max<len) max=len;
	 printf("%d", max);
}

