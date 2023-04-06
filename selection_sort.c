#include<stdio.h>
#include<stdlib.h>

int selection_sort(int a[],int n){
    int i,j,temp,iom;
    for(i=0;i<n-1;i++){
        iom=i;
        for(j=i+1;j<n;j++){
            if(a[iom]>a[j]){
                iom=j;
            }
        }
        temp=a[i];
        a[i]=a[iom];
        a[iom]=temp;
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
    
    selection_sort(a,n);
    
    printf("\nArray after sorting : ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}