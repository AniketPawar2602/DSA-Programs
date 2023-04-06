#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *prev;
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
        p->prev=NULL;
        head=p;
    }
    else{
        p->next=head;
        p->prev=NULL;
        head->prev=p;
        head=p;
    }
    printf("\nNode inserted...");
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
    temp->next->prev=p;
    temp->next=p;
    p->prev=temp;
    printf("\nNode inserted...");
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
    p->prev=temp;
    p->next=NULL;
    printf("\nNode inserted...");
}

int deleteAtBegin(){
    struct node *temp;
    temp=head;
    if(head==NULL){
        printf("\nList is Empty");
    }
    else{
        head=temp->next;
        free(temp);
        head->prev=NULL;
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
        temp->next->next->prev=temp;
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
        while(temp->next!=NULL){
            temp1=temp;
            temp=temp->next;
        }
        temp1->next=NULL;
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