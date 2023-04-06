#include<stdio.h>
#include<stdlib.h>

int bubble_sort(int a[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
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
    
    bubble_sort(a,n);
    
    printf("\nArray after sorting : ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}