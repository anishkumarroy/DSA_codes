#include<stdio.h>
int main(){
    int n,i,j; printf("enter the length of the array:\n"); scanf("%d", &n); int arr[n];
    for(int i=0;i<n;i++) scanf("%d", &arr[i]);
    int temp[n]; for(int i=0;i<n;i++) temp[i]=arr[i]; int c;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++) { if(temp[i]<temp[j]) {c=temp[i]; temp[i]=temp[j]; temp[j]=c;}}
    }
    int max2nd=temp[1],k;
    for(i=0;i<n;i++) {if(max2nd==arr[i]) k=i;}
    for(i=k;i<n-1;i++) arr[i]=arr[i+1];
    n--; for(i=0;i<n;i++) printf("%d ", arr[i]);
}
