#include<stdio.h>
int main()
{
	printf("Enter the length of the array you want to make: "); int i, n; scanf("%d", &n); int a[n]; for(i=0;i<n;i++) scanf("%d", &a[i]);
	printf("Enter the index from where you want to rotate the array: "); int pos; scanf("%d", &pos); int b[pos]; 
	for(i=0;i<pos;i++) b[i]=a[i];int temp=0; for(i=pos;i<n;i++) { a[temp]=a[i]; temp++;} temp=n; for(i=pos-1; i>=0; i--) {a[temp-1]=b[i]; temp--;}
	for(i=0;i<n;i++) printf("%d", a[i]);
}
