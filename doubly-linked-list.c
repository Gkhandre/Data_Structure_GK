
#include <stdio.h>
#include <stdlib.h>
struct node {
  int data;
  struct node *prev;
  struct node *next;
};
struct node *insertAtbeginning(struct node *head, int data) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  {
    if (temp == NULL) {
      temp->prev = NULL;
      temp->data = data;
      temp->next = NULL;
    } else
    {
      temp->prev = NULL;
      temp->data = data;
      temp->next = head;
      head = temp;
      return head;
    }
  }
}
void Traversal(struct node *temp) 
{
    if(length (temp) == 0)
    {
        printf("empty");
        return;
    }
    while(temp != NULL)
        {
            printf("%d",temp->data);
            temp = temp->next;
        }
}
int main()
 {
  struct node *head;
   Traversal(head);
  head = (struct Node *)malloc(sizeof(struct Node));
  printf("Length Of Linked List is: %d\n", length(head));
  head->data = 03;
  head->next = NULL;
  printf("Length Of Linked List is: %d\n", length(head));
  Traversal(head);
  head = insertAtbeginning(head, 27);
  head = insertAtbeginning(head, 111);
 Traversal(head);
  printf("Length Of Linked List is: %d\n", length(head));
  return 0;
}