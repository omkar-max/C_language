#include <stdio.h>
#include<stdlib.h>
typedef struct  node{
    char data[20];
    struct node *next;
}Node;

Node *create_list(Node *start1){
    Node *new_node,*temp  = start1;
    if (temp == NULL){
        temp = (Node *)malloc(sizeof(Node));
        printf("Enter the string\n");
        gets(temp->data);
        temp->next = NULL;


        start1 = temp;
        

    }
    else{
        while(temp->next != NULL){
            temp = temp->next;
        }
        new_node = (Node *)malloc(sizeof(Node));
        printf("Enter the string\n");
        gets(new_node->data);
        new_node->next = NULL;

        temp->next = new_node;


    }
    return start1;
}
void display(Node *start_1){
    Node *p;
    p = start_1;
    if(p == NULL){
        printf("List is empty\n");

    }
    else{
        while(p != NULL){
            printf("%s ->", p->data);
            p = p->next;
        }
    }
}
int check_equal(Node *list1,Node *list2){
    char *p1 =  list1->data;
    char *p2 = list2->data;
    while (list1 != NULL && list2 != NULL){
        while(*p1 != '\0' && *p2 != '\0'){
            if(*p1 != *p2){
                return 0;
            }
            else{
                p1++;
                p2++;
            }
            if(*p1 == '\0' && list1->next != NULL ){
                list1 =  list1->next;
                p1 = list1->data;
            }
            if(*p2 == '\0' && list2->next != NULL ){
                list2 = list2->next;
                p2 = list2->data;
            }
        }
        list1 = list1->next;
        list2 = list2->next;
        

    }
    // if (list1 == NULL && list2 == NULL){
    //     return 1;
    // }
    return (list1 == NULL && list2 == NULL) ||
           (*p1 == '\0' && *p2 == '\0' &&
            list1->next == NULL && list2->next == NULL);
}
int main(){
    Node *start_1 = NULL, *start_2 =  NULL;
    printf("Enter the lis1 string\n");
    for(int i = 0; i < 1; i++){
        start_1 = create_list(start_1);
    }
    
    printf("Enter the lis2 string\n");
    for(int i = 0; i < 3; i++){
        start_2 = create_list(start_2);
    }
    printf("%d", check_equal(start_1,start_2));
    // display(start_1);
    // printf("\n");
    // display(start_2);
    return 0;

}