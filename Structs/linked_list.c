#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node* create_node(struct node* start, int data){

    struct node *p;
    p = start;
    if(p == NULL){
        p = (struct node *)malloc(sizeof(struct node));
        p->data = data;
        p->next = NULL;
        return p;
    }
    else{
        struct node *temp;
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = data;
        temp->next = NULL;
        while (p->next != NULL)
        {
            p = p->next;
        }
        p->next = temp;
        return start;
         
    }
}
void display(struct node *start){
    struct node *p;
    p = start;
    if(p == NULL){
        printf("List is empty\n");

    }
    else{
        while(p != NULL){
            printf("%d ->", p->data);
            p = p->next;
        }
    }
}
struct node *insert_pos(struct node *start, int data, int pos){
    struct node *node_temp, *temp, *p =  start;
    for(int i = 1; i <  pos-1; i++){
        p = p-> next;
    }
    node_temp = (struct node*)malloc(sizeof(struct node));
    node_temp->data = data;
    node_temp->next = NULL;
    temp =  p->next;
    p->next =  node_temp;
    node_temp->next= temp;
    return start;
    
}
void delete_pos(struct node *start, int pos){
    struct node *p =  start;
    for (int i = 1; i < pos -1; i++){
        p = p->next;

    }
    p->next = p->next->next;
}
struct node *reverse_list(struct node *start){
    struct node *prev = NULL,*temp =  start, *next_node;
    while (temp != NULL){
        next_node = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next_node;
    }
    return prev;


}
int main(){
    struct node *start = NULL;
    while (1)
    {
        printf("1.Create the list\n");
        printf("2.Display\n");
        printf("3.Insert at given position\n");
        printf("4.Delete the node at particular position\n");
        printf("5.Exit\n");
        printf("6. Reverse\n");
        int ch;
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            /* code */
            int data;
            printf("Enter the data for the node\n");
            scanf("%d", &data);
            start = create_node(start,data);
            break;
        case 2:
            display(start);
            break;
        case 3:
           int new_data, pos;
           printf("Enter the data and pos\n");
           scanf("%d %d", &new_data,&pos);
           start = insert_pos(start,new_data,pos);
           break;
        case 4:
            printf("Eneter the position you want to delete\n");
            scanf("%d", &pos);

            delete_pos(start,pos);
            break;
        case 5:
            exit(1);
        case 6:
            start =  reverse_list(start);
            break;
        default:
            break;
        }
     }
    
                                                                                                                                      
    return 0;
}