#include<stdio.h>
#include<stdlib.h>

int insertion_sort(int a[],int n){
    int i,j,key;
    for(i=1;i<=n-1;i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}

int main(){
    int a[5];
    int i;
    int n;
    printf("\nEnter number of elements you want to store : ");
    scanf("%d",&n);
    printf("\nEnter Elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    printf("\nArray before sorting : ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    
    insertion_sort(a,n);
    
    printf("\nArray after sorting : ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}