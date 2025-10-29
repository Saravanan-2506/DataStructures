#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
}*head = NULL;

struct node * createNode(int value){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

struct node* insertSorted(int value){
    struct node* newNode = createNode(value);
    if(head == NULL||value<head->data){
        newNode->next = head;
        head=newNode;
        return head;
    }

    struct node *temp=head;

    while(temp->next!=NULL&&value>temp->next->data){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}

void deleteNode(int value){
    if(head==NULL){
        printf("List is empty");
    }
    else{
        struct node *temp=head;
        while(temp->next!=NULL&&value>temp->next->data){
        temp=temp->next;
        }
    }
}
void display(){
    if(head==NULL){
        printf("List is empty");
        return ;
    }
    else{
        struct node* temp = head;
        while(temp!=NULL){
            printf("%d->",temp->data);
            temp=temp->next;
        }
    printf("NULL");
    }
}

int main(){
    insertSorted(50);
    insertSorted(20);
    insertSorted(70);
    insertSorted(10);
    insertSorted(40);
    insertSorted(60);
    insertSorted(30);
    insertSorted(80);


    display();
}
