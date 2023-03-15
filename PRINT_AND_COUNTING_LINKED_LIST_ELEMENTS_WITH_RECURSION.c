#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data ;
    struct node *link;
}node;
void add_at_end(node *start,int data){
    node *new_node = malloc(sizeof(node)),*temp;
    new_node->data = data;
    new_node->link = NULL;
    temp = start;
    while (temp ->link != NULL)
    {
        temp = temp->link;
    }
    temp ->link = new_node;
}

int counting(node *start,int count){
    node *tester = start;
    if(tester->link == NULL){
        printf("%d\n",tester->data);
        return 1;
    }else{
        printf("%d\n",tester->data);
        return 1+counting(tester->link,count);
    }
}
int main(){
    int num,data;
    node *head = malloc(sizeof(node));
    printf(" enter data of the first node : ");
    scanf("%d",&head ->data);
    head ->link = NULL;
    printf(" kow many node do you want to add : ");
    scanf("%d",&num);
    for (int i = 0; i < num; i++)
    {
        printf(" etner the data of the node : ");
        scanf("%d",&data);
        add_at_end(head,data);
    }
    printf("the number of nodes is : %d",counting(head,0));
}