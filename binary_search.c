#include<stdio.h>
#include<stdlib.h>

int binary_search(int a[], int n, int key){
   int low,mid,high;
   low=0;
   high=n-1;
   while(low<=high){
    mid=(low+high)/2;
    if(a[mid]==key){
        return mid;
    }
    else if(a[mid]<key){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
   }
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
    location=binary_search(a,n,key);
    if(location==-1){
        printf("\nElement is not found...");
    }
    else{
        printf("\nElement is found at %d location.",location);
    }
}