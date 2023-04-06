#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head;

int insertAtBegin(){
    int item;
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter New Node : ");
    scanf("%d",&item);
    p->data=item;
    if(head==NULL){
        p->next=NULL;
        head=p;
    }
    else{
        p->next=head;
        head=p;
    }
    printf("\nElement inserted...");
}

int insertAtMid(){
    int i=0,item,loc;
    struct node *temp;
    temp=head;
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter New Node : ");
    scanf("%d",&item);
    p->data=item;
    printf("\nEnter Location : ");
    scanf("%d",&loc);
    while(i!=loc-1){
        temp=temp->next;
        i++;
    }
    p->next=temp->next;
    temp->next=p;
    printf("\nElement inserted...");
}

int insertAtLast(){
    int item;
    struct node *temp;
    temp=head;
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter New Node : ");
    scanf("%d",&item);
    p->data=item;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=p;
    p->next=NULL;
    printf("\nElement inserted...");
}

int deleteAtBegin(){
    struct node *temp;
    temp=head;
    if(head==NULL){
        printf("\nList is Empty...");
    }
    else{
        head=temp->next;
        free(temp);
        printf("\nElement deleted...");
    }
}

int deleteAtMid(){
    if(head==NULL){
        printf("\nList is Empty...");
    }
    else{
        int i=0,loc;
        struct node *temp;
        temp=head;
        printf("\nEnter Location : ");
        scanf("%d",&loc);
        while(i!=loc-1){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        printf("\nElement deleted...");
    }
}

int deleteAtLast(){
    if(head==NULL){
        printf("\nList is Empty");
    }
    else{
        struct node *temp;
        temp=head;
        struct node *temp1;
        while(temp->next!=NULL){
            temp1=temp;
            temp=temp->next;
        }
        temp1->next=NULL;
        free(temp);
        printf("\nElement deleted...");
    }
}

int display(){
    if(head==NULL){
        printf("\nList is empty");
    }
    else{
        struct node *temp;
        temp=head;
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}

int main(){
    int ch;
    while(1){
        printf("\n1. Insert At Begin");
        printf("\n2. Insert At Mid");
        printf("\n3. Insert At Last");
        printf("\n4. Delete At Begin");
        printf("\n5. Delete At Mid");
        printf("\n6. Delete At Last");
        printf("\n7. Display");
        printf("\n8. Exit");
        printf("\nEnter Your Choice : ");
        scanf("%d",&ch);
        switch(ch){
        case 1: insertAtBegin();
                break;
        case 2: insertAtMid();
                break;
        case 3: insertAtLast();
                break;
        case 4: deleteAtBegin();
                break;
        case 5: deleteAtMid();
                break;
        case 6: deleteAtLast();
                break;
        case 7: display();
                break;
        case 8: exit(0);
                break;
        default:printf("\nInvalid Choice !!!");
                break;
        }
    }
}