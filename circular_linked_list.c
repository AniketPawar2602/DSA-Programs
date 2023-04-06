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
    struct node *temp;
    temp=head;
    printf("\nEnter New Node : ");
    scanf("%d",&item);
    p->data=item;
    if(head==NULL){
        head=p;
        p->next=head;
    }
    else{
        while(temp->next!=head){
            temp=temp->next;
        }
        p->next=head;
        temp->next=p;
        head=p;
    }
    printf("\nNode inserted...");
}

int insertAtMid(){
    int i=0,item,loc;
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    struct node *temp;
    temp=head;
    printf("\nEnter New Node : ");
    scanf("%d",&item);
    p->data=item;
    printf("\nEnter location : ");
    scanf("%d",&loc);
    while(i!=loc-1){
        temp=temp->next;
        i++;
    }
    p->next=temp->next;
    temp->next=p;
    printf("\nNode inserted...");
}

int insertAtLast(){
    int item;
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    struct node *temp;
    temp=head;
    printf("\nEnter New Node : ");
    scanf("%d",&item);
    p->data=item;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=p;
    p->next=head;
    printf("\nNode inserted...");
}

int deleteAtBegin(){
    struct node *temp;
    temp=head;
    if(head==NULL){
        printf("\nList is Empty");
    }
    else{
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=head->next;
        free(head);
        head=temp->next;
        printf("\nNode deleted...");
    }
}

int deleteAtMid(){
    int i=0,loc;
    struct node *temp;
    temp=head;
    if(head==NULL){
        printf("\nList is Empty");
    }
    else{
        printf("\nEnter Location : ");
        scanf("%d",&loc);
        while(i!=loc-1){
            temp=temp->next;
            i++;
        }
        temp->next=temp->next->next;
        printf("\nNode deleted...");
    }
}

int deleteAtLast(){
    struct node *temp1;
    struct node *temp;
    temp=head;
    if(head==NULL){
        printf("\nList is Empty");
    }
    else{
        while(temp->next!=head){
            temp1=temp;
            temp=temp->next;
        }
        temp1->next=head;
        free(temp);
        printf("\nNode deleted...");
    }
}

int display(){
    struct node *temp;
    temp=head;
    if(head==NULL){
        printf("\nList is Empty");
    }
    else{
        while(temp->next!=head){
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("%d ",temp->data);
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