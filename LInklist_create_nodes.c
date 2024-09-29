#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node *link;
};

int main() {
    struct node *head = NULL;
    
    // First node
    head = (struct node*)malloc(sizeof(struct node)); 
    head->data = 45;
    head->link = NULL;

    // Second node
    struct node *current = NULL;
    current = (struct node*)malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;

    // Link the first node to the second node
    head->link = current;
    
    // Third node
    struct node *thirdnode = NULL;
    thirdnode = (struct node*)malloc(sizeof(struct node));
    thirdnode->data = 100;
    thirdnode->link = NULL;
    
    // Link second node to the third node
    head->link->link = thirdnode;
    
    // Fourth node
    struct node *fourthnode = NULL;
    fourthnode = (struct node*)malloc(sizeof(struct node));
    fourthnode->data = 102;
    fourthnode->link = NULL;
    
    // Link third node to the fourth node
    head->link->link->link = fourthnode;

//check if list is empty 
    if(head == NULL){
    printf("list is empty\n");
    return 0;
    }
    
    // Print the data of all nodes
    struct node *temp = head;
    
    while (temp != NULL) {
       // printf("%d\n", temp->data);
         printf("%d\n", temp->data);
       
        temp = temp->link;          // Move to the next node
    }

    return 0;
}


