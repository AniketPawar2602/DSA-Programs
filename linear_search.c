#include<stdio.h>
#include<stdlib.h>

int linear_search(int a[], int n, int key){
    int i;
    for(i=0;i<n;i++){
        if(key==a[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int a[5];
    int i;
    int n;
    int key;
    int location;
    printf("\nEnter number of elements you want to store : ");
    scanf("%d",&n);
    printf("\nEnter elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\nEnter number which you want to search : ");
    scanf("%d",&key);
    location=linear_search(a,n,key);
    if(location==-1){
        printf("\nElement is not found...");
    }
    else{
        printf("\nElement is found at %d location.",location);
    }
}